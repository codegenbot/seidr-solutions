#include <algorithm>
#include <iostream>
#include <vector>

vector<int> leaders(vector<int> v) {
    vector<int> res;
    int rightmost = v.back();
    res.push_back(rightmost);

    for (int i = v.size() - 2; i >= 0; --i) {
        if (v[i] >= rightmost) {
            rightmost = v[i];
            res.push_back(rightmost);
        }
    }

    reverse(res.begin(), res.end());
    return res;
}

int main() {
    vector<int> v = {1, 3, 4, 1, 5};
    vector<int> result = leaders(v);
    for (int x : result) cout << x << " ";
    return 0;
}