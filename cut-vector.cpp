#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int>& vec) {
    int minDiff = INT_MAX;
    vector<vector<int>> result(2);
    
    for (int i = 1; i <= vec.size(); i++) {
        if (i == vec.size() || vec[i] - vec[0] < minDiff) {
            minDiff = vec[i] - vec[0];
            result[0].clear();
            result[0].insert(result[0].end(), vec.begin(), vec.begin() + i);
            result[1].clear();
            result[1].insert(result[1].end(), vec.begin() + i, vec.end());
        }
    }
    
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (auto& x : vec) cin >> x;
    auto res = cutVector(vec);
    cout << "[";
    for (const auto& v : res[0]) cout << v << " ";
    cout << "] ["; 
    for (const auto& v : res[1]) cout << v << " ";
    cout << "]" << endl;
    return 0;
}