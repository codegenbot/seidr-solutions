#include <vector>
using namespace std;

vector<int> cutVector(vector<int>& vec) {
    int minDiff = INT_MAX;
    int cutIndex = -1;
    for (int i = 0; i < vec.size() - 1; i++) {
        int sumLeft = 0, sumRight = 0;
        for (int j = 0; j <= i; j++) {
            sumLeft += vec[j];
        }
        for (int j = i + 1; j < vec.size(); j++) {
            sumRight += vec[j];
        }
        int diff = abs(sumLeft - sumRight);
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    vector<int> leftVec(vec.begin(), vec.begin() + cutIndex + 1);
    vector<int> rightVec(vec.begin() + cutIndex + 1, vec.end());
    return {leftVec, rightVec};
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    pair<vector<int>, vector<int>> result = cutVector(vec);
    cout << "Left vector: ";
    for (int num : result.first) {
        cout << num << " ";
    }
    cout << endl;
    cout << "Right vector: ";
    for (int num : result.second) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}