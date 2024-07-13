#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> vec) {
    int n = vec.size();
    for (int i = 0; i < n - 1; ++i) {
        if (vec[i] == vec[i + 1]) {
            return {vector<int>(vec.begin(), vec.begin() + i + 1), vector<int>(vec.begin() + i, vec.end())};
    }
    for (int i = 0; i < n - 1; ++i) {
        if (abs(vec[i] - vec[i + 1]) <= abs((n - i - 1) * (vec[i] - vec[i + 1])) / 2) {
            return {vector<int>(vec.begin(), vec.begin() + i + 1), vector<int>(vec.begin() + i, vec.end())};
    }
    return {vector<int>(vec.begin()), vector<int>(vec.begin() + 1, vec.end())};
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
    }
    pair<vector<int>, vector<int>> res = cutVector(vec);
    for (const auto& num : res.first) {
        cout << num << " ";
    }
    cout << endl;
    for (const auto& num : res.second) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}