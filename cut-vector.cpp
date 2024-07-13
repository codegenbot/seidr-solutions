#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    int min_diff = INT_MAX;
    int split_idx = -1;
    
    for (int i = 0; i < n; i++) {
        int left_sum = 0, right_sum = 0;
        
        for (int j = 0; j <= i; j++)
            left_sum += v[j];
        for (int j = i + 1; j < n; j++)
            right_sum += v[j];
        
        if (left_sum == right_sum) {
            return {{v.begin(), v.begin() + i}, {v.begin() + i, v.end()}};
        } else if (abs(left_sum - right_sum) < min_diff) {
            min_diff = abs(left_sum - right_sum);
            split_idx = i;
        }
    }
    
    int left_sum = 0, right_sum = 0;
    for (int i = 0; i < n; i++)
        if (i <= split_idx)
            left_sum += v[i];
        else
            right_sum += v[i];
    
    return {{v.begin(), v.begin() + split_idx}, {v.begin() + split_idx, v.end()}};
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    
    vector<vector<int>> result = cutVector(v);
    for (const auto &v : result) {
        for (int x : v)
            cout << x << " ";
        cout << endl;
    }
    
    return 0;
}