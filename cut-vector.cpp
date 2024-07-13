#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> vec) {
    int min_diff = INT_MAX;
    int index = 0;
    for (int i = 1; i < vec.size(); i++) {
        if ((vec[i] - vec[0]) == (vec.back() - vec[i-1])) {
            return {{vec[0]}, vec.substr(1)};
        }
        else if (abs(vec[i] - vec[0]) <= min_diff) {
            min_diff = abs(vec[i] - vec[0]);
            index = i;
        }
    }
    return {{vec[0]}, vec.substr(index+1)};
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