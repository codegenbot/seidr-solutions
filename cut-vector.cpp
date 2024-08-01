#include <vector>
using namespace std;

vector<int> cutVector(vector<int>& v) {
    int leftSum = 0;
    int rightSum = 0;
    for (int i = 0; i < v.size(); i++) {
        if (i == v.size() / 2 || i == v.size() - 1) {
            rightSum += v[i];
        } else {
            leftSum += v[i];
        }
    }

    vector<int> left;
    for (int i = 0; i < v.size() / 2; i++) {
        left.push_back(v[i]);
    }

    vector<int> right;
    for (int i = v.size() / 2; i < v.size(); i++) {
        right.push_back(v[i]);
    }

    return {left, right};
}

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    auto res = cutVector(v);

    cout << "[";
    for (int num : res[0]) {
        cout << num << " ";
    }
    cout << "] [";

    for (int num : res[1]) {
        cout << num << " ";
    }
    cout << "]" << endl;

    return 0;
}