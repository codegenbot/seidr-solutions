#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> vec) {
    int min_diff = INT_MAX;
    int split_idx = 0;
    
    for (int i = 1; i <= vec.size(); i++) {
        int left_sum = 0, right_sum = 0;
        
        for (int j = 0; j < i; j++) {
            left_sum += vec[j];
        }
        for (int k = i; k < vec.size(); k++) {
            right_sum += vec[k];
        }
        
        int diff = abs(left_sum - right_sum);
        if (diff <= min_diff) {
            min_diff = diff;
            split_idx = i;
        }
    }
    
    vector<int> left_vec(vec.begin(), vec.begin() + split_idx);
    vector<int> right_vec(vec.begin() + split_idx, vec.end());
    
    return make_pair(left_vec, right_vec);
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (auto &i : vec) {
        cin >> i;
    }
    pair<vector<int>, vector<int>> result = cutVector(vec);
    cout << "{";
    for (const auto &i : result.first) {
        cout << i << " ";
    }
    cout << "}, {" << endl;
    for (const auto &i : result.second) {
        cout << i << " ";
    }
    return 0;
}