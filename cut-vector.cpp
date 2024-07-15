```
#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res(2);

    if(n <= 1)
        return {{}, {}};

    int min_diff = INT_MAX;
    int cut_idx = 0;

    for(int i = 0; i < n; i++) {
        int left_sum = 0, right_sum = 0;
        
        for(int j = 0; j <= i; j++)
            left_sum += v[j];
        for(int j = i+1; j < n; j++)
            right_sum += v[j];

        if(abs(left_sum - right_sum) < min_diff) {
            min_diff = abs(left_sum - right_sum);
            cut_idx = i;
        }
    }

    res[0].assign(v.begin(), v.begin() + cut_idx+1);
    res[1].assign(v.begin()+cut_idx, v.end());

    return res;
}

int main() {
    vector<int> v = {2, 3, 5, 10};
    vector<vector<int>> result = cutVector(v);

    for(auto sub : result) {
        for(int x : sub)
            cout << x << " ";
        cout << endl;
    }
}