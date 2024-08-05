#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> vec) {
    int minDiff = INT_MAX;
    pair<int, int> splitPoint;

    for (int i = 0; i < vec.size() - 1; ++i) {
        int diff = abs(vec[i] - vec[i + 1]);
        if (diff <= minDiff) {
            minDiff = diff;
            splitPoint = {i, i + 1};
        }
    }

    vector<int> leftVec(vec.begin(), vec.begin() + splitPoint.first);
    vector<int> rightVec(vec.begin() + splitPoint.second, vec.end());

    return make_pair(leftVec, rightVec);
}

int main() {
    int n;
    cin >> n;

    vector<int> vec(n);
    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
    }

    pair<vector<int>, vector<int>> result = cutVector(vec);

    cout << "Left: ";
    for (int num : result.first) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Right: ";
    for (int num : result.second) {
        cout << num << " ";
    }
    cout << endl;
}