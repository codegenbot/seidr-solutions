#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> vec) {
    int n = vec.size();
    vector<vector<int>> res;
    
    for (int i = 1; i < n; i++) {
        if ((vec[i] - vec[0]) == (vec[n-1] - vec[i-1])) {
            res.push_back({vec.begin(), vec.end()});
            return {{}, {}};
        }
    }
    
    int min_diff = INT_MAX;
    int cut_idx = 0;
    
    for (int i = 1; i < n; i++) {
        int diff = abs(vec[i] - vec[0]) - abs(vec[n-1] - vec[i-1]);
        if (diff < min_diff) {
            min_diff = diff;
            cut_idx = i;
        }
    }
    
    res.push_back({vec.begin(), vec.begin() + cut_idx});
    res.push_back({vec.begin() + cut_idx, vec.end()});
    
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    
    vector<vector<int>> result = cutVector(vec);
    
    for (auto v : result) {
        for (int num : v) {
            cout << num << " ";
        }
        cout << endl;
    }
    
    return 0;
}