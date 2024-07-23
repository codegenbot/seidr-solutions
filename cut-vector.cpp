#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    int minDiff = INT_MAX;
    int cutIndex = -1;

    for (int i = 0; i < n; i++) {
        int sumLeft = 0, sumRight = 0;
        for (int j = 0; j < i; j++) {
            sumLeft += v[j];
        }
        for (int j = i; j < n; j++) {
            sumRight += v[j];
        }

        if (sumLeft == sumRight) {
            return {{}, v};
        }

        int diff = abs(sumLeft - sumRight);
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }

    vector<int> left(v.begin(), v.begin() + cutIndex);
    vector<int> right(v.begin() + cutIndex, v.end());
    return {left, right};
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    pair<vector<int>, vector<int>> result = cutVector(v);
    cout << "Left: ";
    for (int x : result.first) {
        cout << x << " ";
    }
    cout << endl;
    cout << "Right: ";
    for (int x : result.second) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}