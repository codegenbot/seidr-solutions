#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> vec) {
    int min_diff = INT_MAX;
    int cut_index = 0;
    
    for (int i = 1; i <= vec.size(); i++) {
        int left_sum = 0, right_sum = 0;
        
        for (int j = 0; j < i; j++) {
            left_sum += vec[j];
        }
        
        for (int j = i; j < vec.size(); j++) {
            right_sum += vec[j];
        }
        
        int diff = abs(left_sum - right_sum);
        
        if (diff <= min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }
    
    vector<int> left_vec(vec.begin(), vec.begin() + cut_index);
    vector<int> right_vec(vec.begin() + cut_index, vec.end());
    
    return {left_vec, right_vec};
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (auto &x : vec) cin >> x;
    
    pair<vector<int>, vector<int>> result = cutVector(vec);
    
    cout << "[";
    for (const auto &x : result.first) cout << x << " ";
    cout << "] [";
    for (const auto &x : result.second) cout << x << " ";
    cout << "]" << endl;
    
    return 0;
}