#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res(2);
    int minDiff = INT_MAX;
    int pos = -1;

    for (int i = 0; i < n; i++) {
        int leftSum = 0, rightSum = 0;
        for (int j = 0; j < i; j++) {
            leftSum += v[j];
        }
        for (int j = i; j < n; j++) {
            rightSum += v[j];
        }

        if (leftSum == rightSum) {
            res[0] = vector<int>(v.begin(), v.begin() + i);
            res[1] = vector<int>(v.begin() + i, v.end());
            return res;
        } else if (abs(leftSum - rightSum) < minDiff) {
            minDiff = abs(leftSum - rightSum);
            pos = i;
        }
    }

    int leftSum = 0, rightSum = 0;
    for (int i = 0; i < pos; i++) {
        leftSum += v[i];
    }
    for (int i = pos; i < n; i++) {
        rightSum += v[i];
    }

    res[0] = vector<int>(v.begin(), v.begin() + pos);
    res[1] = vector<int>(v.begin() + pos, v.end());
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    vector<vector<int>> result = cutVector(v);

    for (auto &vec : result) {
        for (int num : vec) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}