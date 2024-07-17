#include <algorithm>
#include <iostream>
using namespace std;

vector<int> leaders(vector<int> v) {
    vector<int> res;
    int max_right = v.back();
    res.push_back(max_right);

    for (int i = v.size() - 2; i >= 0; --i) {
        if (v[i] >= max_right) {
            max_right = v[i];
            res.push_back(max_right);
        }
    }

    reverse(res.begin(), res.end());
    return res;
}

int main() {
    vector<int> v = {12, 993, 557, 890, 695, 295, 484, 866, 801, 909, 397, 667, 431};
    vector<int> result = leaders(v);
    for (int x : result) cout << x << " ";
    return 0;
}