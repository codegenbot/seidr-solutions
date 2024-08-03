#include <vector>
using namespace std;

vector<int> cutVector(vector<int>& vec) {
    int minDiff = INT_MAX;
    int splitIndex = 0;
    for (int i = 1; i < vec.size(); ++i) {
        int diff = abs(vec[i] - vec[0]);
        if (diff < minDiff) {
            minDiff = diff;
            splitIndex = i;
        }
    }
    return {vector<int>(vec.begin(), vec.begin() + splitIndex), vector<int>(vec.begin() + splitIndex, vec.end())};
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (auto &i : vec) cin >> i;
    auto result = cutVector(vec);
    cout << "1 ";
    for (int i = 0; i < result[0].size(); ++i) {
        cout << result[0][i] << " ";
    }
    cout << "\n";
    
    cout << "0 ";
    for (int i = 0; i < result[1].size(); ++i) {
        cout << result[1][i] << " ";
    }
    cout << "\n";
    return 0;
}