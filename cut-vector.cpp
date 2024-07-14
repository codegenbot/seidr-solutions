#include <vector>
using namespace std;

vector<int> cutVector(vector<int>& vec) {
    int minDiff = INT_MAX;
    int pos = 0;
    
    for (int i = 1; i < vec.size(); i++) {
        int diff = abs(vec[i] - vec[i-1]);
        if (diff <= minDiff) {
            minDiff = diff;
            pos = i;
        }
    }
    
    vector<int> left(vec.begin(), vec.begin() + pos);
    vector<int> right(vec.begin() + pos, vec.end());
    
    return {left, right};
}

int main() {
    int n; cin >> n;
    vector<int> vec(n);
    for (auto& x : vec) cin >> x;

    auto res = cutVector(vec);

    cout << "Left: ";
    for (const auto& x : res[0]) cout << x << " ";
    cout << endl;

    cout << "Right: ";
    for (const auto& x : res[1]) cout << x << " ";
    cout << endl;
    
    return 0;
}