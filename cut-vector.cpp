#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int>& vec) {
    int min_diff = INT_MAX;
    vector<vector<int>> result;
    
    for (int i = 1; i < vec.size(); ++i) {
        int left_sum = 0, right_sum = 0;
        
        for (int j = 0; j < i; ++j) {
            left_sum += vec[j];
        }
        
        for (int j = i; j < vec.size(); ++j) {
            right_sum += vec[j];
        }
        
        int diff = abs(left_sum - right_sum);
        
        if (diff <= min_diff) {
            min_diff = diff;
            result = {{vec.begin(), vec.begin() + i}, {vec.begin() + i, vec.end()}};
        }
    }
    
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (auto &x : vec) {
        cin >> x;
    }
    vector<vector<int>> res = cutVector(vec);
    for (const auto &v : res) {
        for (int x : v) {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}