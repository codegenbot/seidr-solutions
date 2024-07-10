#include <vector>
using namespace std;

vector<int> cutVector(vector<int>& vec) {
    int minDiff = INT_MAX;
    int cutIndex = 0;
    
    for (int i = 1; i < vec.size(); i++) {
        int diff = abs(vec[i] - vec[0]);
        if (diff <= minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    vector<int> leftVec(vec.begin(), vec.begin() + cutIndex);
    vector<int> rightVec(vec.begin() + cutIndex, vec.end());
    
    return {leftVec, rightVec};
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (auto& x : vec) cin >> x;

    auto result = cutVector(vec);

    cout << "Left Vector: ";
    for (const auto& x : result[0]) cout << x << " ";
    cout << endl;

    cout << "Right Vector: ";
    for (const auto& x : result[1]) cout << x << " ";
    cout << endl;
    
    return 0;
}