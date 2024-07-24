#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<int> left(n, 0);
    vector<int> right(n, 0);

    for (int i = 1; i < n; i++) {
        if (v[i] > v[0]) {
            left[i] = v[0];
            right[i-1] = v[0];
        }
    }

    int diff = INT_MAX;
    int pos = -1;

    for (int i = 1; i < n; i++) {
        if (abs(v[i]-v[0]) <= diff) {
            diff = abs(v[i]-v[0]);
            pos = i;
        }
    }

    vector<int> leftVec;
    vector<int> rightVec;

    for (int i = 0; i < pos; i++) {
        leftVec.push_back(left[i]);
    }
    for (int i = pos; i < n; i++) {
        rightVec.push_back(right[i]);
    }

    return {leftVec, rightVec};
}

int main() {
    int N;
    cin >> N;

    vector<int> v(N);
    for(int i = 0; i < N; i++) {
        cin >> v[i];
    }

    auto res = cutVector(v);

    for (const auto& x : res[0]) {
        cout << x << " ";
    }
    cout << endl;

    for (const auto& x : res[1]) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}