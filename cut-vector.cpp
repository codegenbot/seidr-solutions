#include <vector>
using namespace std;

void findCuttingPoint(vector<int> &v) {
    int leftSum = 0;
    for (int i = 0; i < v.size(); i++) {
        leftSum += v[i];
    }

    int rightSum = 0;
    for (int i = v.size() - 1; i >= 0; i--) {
        rightSum += v[i];
    }

    int minDiff = INT_MAX;
    int cuttingPoint = -1;

    for (int i = 0; i < v.size(); i++) {
        leftSum -= v[i];
        rightSum -= v[v.size() - 1 - i];
        if (abs(leftSum - rightSum) < minDiff) {
            minDiff = abs(leftSum - rightSum);
            cuttingPoint = i;
        }
    }

    vector<int> left, right;
    for (int i = 0; i < cuttingPoint; i++) {
        left.push_back(v[i]);
    }
    for (int i = cuttingPoint; i < v.size(); i++) {
        right.push_back(v[i]);
    }

    cout << "{";
    for (int i = 0; i < left.size(); i++) {
        if (i == left.size() - 1) {
            cout << left[i];
        } else {
            cout << left[i] << ",";
        }
    }
    cout << "}" << endl;
    cout << "{";
    for (int i = 0; i < right.size(); i++) {
        if (i == right.size() - 1) {
            cout << right[i];
        } else {
            cout << right[i] << ",";
        }
    }
    cout << "}" << endl;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    findCuttingPoint(v);

    return 0;
}