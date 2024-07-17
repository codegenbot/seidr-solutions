#include <algorithm>
#include <iostream>
#include <vector>

std::vector<int> leaders(std::vector<int> v) {
    std::vector<int> res;
    int rightmost = v.back();
    res.push_back(rightmost);

    for (int i = v.size() - 2; i >= 0; --i) {
        if (v[i] >= rightmost) {
            rightmost = v[i];
            res.push_back(rightmost);
        }
    }

    std::reverse(res.begin(), res.end());
    return res;
}

int main() {
    std::vector<int> v = {1, 3, 4, 1, 5};
    std::vector<int> result = leaders(v);
    for (int x : result) cout << x << " ";
    return 0;
}