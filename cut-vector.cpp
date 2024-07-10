#include <iostream>
#include <vector>

std::vector<std::vector<int>> cutVector(std::vector<int> v) {
    int n = v.size();
    std::vector<std::vector<int>> res(2);
    res[0].push_back(v[0]);
    for (int i = 1; i < n; ++i) {
        if (v[i] - v[0] <= 0) {
            res[0].push_back(v[i]);
        } else {
            res[0].pop_back();
            res[1].push_back(v[i]);
            break;
        }
    }
    return res;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> v[i];
    }
    std::vector<std::vector<int>> result = cutVector(v);
    for (auto &v : result) {
        for (auto x : v) {
            std::cout << x << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}