```cpp
#include <iostream>
#include <vector>
#include <utility>

std::pair<std::vector<int>, std::vector<int>> cutVector(std::vector<int> v) {
    int n = v.size();
    for (int i = 0; i <= n - 1; i++) {
        if (i > 0 && v[i] != v[0]) {
            break;
        }
    }
    std::pair<std::vector<int>, std::vector<int>> res;
    res.first.resize(i);
    for (int j = 0; j < i; j++) {
        res.first.push_back(v[j]);
    }
    res.second.resize(n - i);
    for (int j = i; j < n; j++) {
        res.second.push_back(v[j]);
    }
    return res;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> v(n);
    for (int i = 0; i < n; i++) {
        std::cin >> v[i];
    }
    std::pair<std::vector<int>, std::vector<int>> res = cutVector(v);
    std::cout << "[";
    for (int i = 0; i < res.first.size(); i++) {
        std::cout << res.first[i];
        if (i < res.first.size() - 1) {
            std::cout << " ";
        }
    }
    std::cout << "] [";
    for (int i = 0; i < res.second.size(); i++) {
        std::cout << res.second[i];
        if (i < res.second.size() - 1) {
            std::cout << " ";
        }
    }
    std::cout << "]" << std::endl;
    return 0;
}