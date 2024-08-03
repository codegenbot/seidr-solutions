#include <vector>
#include <iostream>

using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int minDiff = INT_MAX;
    int pos = -1;

    for (int i = 0; i < v.size(); i++) {
        int sumLeft = 0, sumRight = 0;

        for (int j = 0; j < i; j++) {
            sumLeft += v[j];
        }

        for (int j = i; j < v.size(); j++) {
            sumRight += v[j];
        }

        if ((sumLeft == sumRight) || (abs(sumLeft - sumRight) < minDiff)) {
            minDiff = abs(sumLeft - sumRight);
            pos = i;
        }
    }

    vector<int> left(v.begin(), v.begin() + pos);
    vector<int> right(v.begin() + pos, v.end());

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