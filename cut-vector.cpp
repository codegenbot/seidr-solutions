#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> vec) {
    int minDiff = INT_MAX;
    int pos = 0;
    
    for (int i = 1; i <= vec.size(); i++) {
        if (i == vec.size() || vec[i-1] != vec[i]) {
            int diff = abs((vec[0] + vec[i-1]) - (vec[i] + (vec.size()-i)));
            if (diff < minDiff) {
                minDiff = diff;
                pos = i;
            }
        }
    }
    
    vector<int> left(vec.begin(), vec.begin() + pos);
    vector<int> right(vec.begin() + pos, vec.end());
    
    return {left, right};
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (auto &x : vec) cin >> x;
    
    pair<vector<int>, vector<int>> result = cutVector(vec);
    
    cout << "Left: ";
    for (auto x : result.first) cout << x << " ";
    cout << endl;
    
    cout << "Right: ";
    for (auto x : result.second) cout << x << " ";
    cout << endl;
    
    return 0;
}