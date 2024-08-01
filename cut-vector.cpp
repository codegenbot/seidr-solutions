#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> &vec) {
    int minDiff = INT_MAX;
    int index;
    for (int i = 1; i < vec.size(); i++) {
        int diff = abs(vec[i] - vec[i-1]);
        if (diff < minDiff) {
            minDiff = diff;
            index = i;
        }
    }
    vector<int> left = vector<int>(vec.begin(), vec.begin() + index);
    vector<int> right = vector<int>(vec.begin() + index, vec.end());
    return {left, right};
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n+1);
    for (int i = 0; i <= n; i++) {
        cin >> vec[i];
    }
    pair<vector<int>, vector<int>> res = cutVector(vec);
    cout << "<";
    for (int i : res.first) {
        cout << i << " ";
    }
    cout << "> and <";
    for (int i : res.second) {
        cout << i << " ";
    }
    cout << ">" << endl;
    return 0;
}