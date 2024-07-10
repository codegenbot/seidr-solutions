#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> vec) {
    int minDiff = INT_MAX;
    int splitIndex = 0;
    
    for (int i = 1; i < vec.size(); i++) {
        int diff = abs(vec[i] - vec[i-1]);
        if (diff < minDiff) {
            minDiff = diff;
            splitIndex = i;
        }
    }
    
    vector<vector<int>> result(2);
    result[0].assign(vec.begin(), vec.begin() + splitIndex);
    result[1].assign(vec.begin() + splitIndex, vec.end());
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (auto &x : vec) cin >> x;

    vector<vector<int>> res = cutVector(vec);

    cout << "[";
    for (const auto &x : res[0]) cout << x << " ";
    cout << "]\n[";
    for (const auto &x : res[1]) cout << x << " ";
    cout << "]";

    return 0;
}