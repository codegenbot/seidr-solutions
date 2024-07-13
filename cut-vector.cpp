#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> vec) {
    int min_diff = INT_MAX;
    int cut_index = 0;
    
    for (int i = 1; i < vec.size(); i++) {
        int diff = abs(vec[i] - vec[0]);
        if (diff <= min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }
    
    vector<int> left_vec = {vec[0]};
    for (int i = 1; i < cut_index; i++) {
        left_vec.push_back(vec[i]);
    }
    
    vector<int> right_vec = {vec[cut_index]};
    for (int i = cut_index + 1; i < vec.size(); i++) {
        right_vec.push_back(vec[i]);
    }
    
    return make_pair(left_vec, right_vec);
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (auto &x : vec) {
        cin >> x;
    }
    pair<vector<int>, vector<int>> result = cutVector(vec);
    cout << "[";
    for (const auto &x : result.first) {
        cout << x << " ";
    }
    cout << "]" << endl;
    cout << "[";
    for (const auto &x : result.second) {
        cout << x << " ";
    }
    cout << "0]" << endl;
    
    return 0;
}