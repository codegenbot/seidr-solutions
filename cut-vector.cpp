#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> vec) {
    int min_diff = INT_MAX;
    int split_index = 0;
    
    for (int i = 1; i < vec.size(); i++) {
        int diff = abs(vec[i] - vec[0]);
        if (diff <= min_diff) {
            min_diff = diff;
            split_index = i;
        }
    }
    
    vector<int> left_vec(vec.begin(), vec.begin() + split_index);
    vector<int> right_vec(vec.begin() + split_index, vec.end());
    
    return make_pair(left_vec, right_vec);
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (auto& i : vec) {
        cin >> i;
    }
    pair<vector<int>, vector<int>> result = cutVector(vec);
    for (const auto& i : result.first) {
        cout << i << " ";
    }
    cout << "\n";
    for (const auto& i : result.second) {
        cout << i << " ";
    }
    return 0;
}