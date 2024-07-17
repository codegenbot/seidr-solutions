#include <algorithm>
#include <iostream>
#include <vector>

std::vector<int> leaders(std::vector<int> v) {
    std::vector<int> res;
    int max_right = v.back();
    res.push_back(max_right);

    for (int i = v.size() - 2; i >= 0; --i) {
        if (v[i] >= max_right) {
            max_right = v[i];
            res.insert(res.begin(), max_right);
        }
    }

    return res;
}

int main() {
    std::vector<int> v = {1, 3, 4, 1, 5};
    std::vector<int> result = leaders(v);
    for (int x : result) std::cout << x << " ";
    return 0;
}