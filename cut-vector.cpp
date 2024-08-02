#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int min_diff = INT_MAX;
    int cut_index = 0;
    
    for (int i = 1; i <= v.size(); i++) {
        int left_sum = 0, right_sum = 0;
        
        if (i < v.size()) {
            for (int j = 0; j < i; j++) {
                left_sum += v[j];
            }
            for (int j = i; j < v.size(); j++) {
                right_sum += v[j];
            }
        } else {
            left_sum = accumulate(v.begin(), v.end(), 0);
            right_sum = 0;
        }
        
        int diff = abs(left_sum - right_sum);
        
        if (diff < min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }
    
    vector<vector<int>> result(2);
    result[0] = v.begin(), result[0].insert(result[0].end(), v.begin() + cut_index, v.end());
    result[1] = v.begin(), result[1].insert(result[1].begin(), v.begin(), v.begin() + cut_index);
    
    return result;
}

int main() {
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    vector<vector<int>> res = cutVector(v);
    cout << "First subvector: ";
    for (int x : res[0]) {
        cout << x << " ";
    }
    cout << endl;
    cout << "Second subvector: ";
    for (int x : res[1]) {
        cout << x << " ";
    }
    cout << endl;
    
    return 0;
}