#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> vec) {
    int min_diff = INT_MAX;
    int cut_index = 0;
    
    for (int i = 1; i < vec.size(); i++) {
        if (vec[i] - vec[0] <= min_diff) {
            min_diff = vec[i] - vec[0];
            cut_index = i;
        }
    }
    
    return {vector<int>(vec.begin(), vec.begin() + cut_index), vector<int>(vec.begin() + cut_index, vec.end())};
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    
    pair<vector<int>, vector<int>> result = cutVector(vec);
    cout << "{";
    for (auto x : result.first) {
        cout << x << " ";
    }
    cout << "}\n{";
    for (auto x : result.second) {
        cout << x << " ";
    }
    cout << "}\n0\n";
    
    return 0;
}