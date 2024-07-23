```cpp
#include <vector>
#include <iostream>

std::vector<int> pluck(std::vector<int> v) {
    return v;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
    }
    return true;
}

std::vector<std::pair<int, int>> result(std::vector<int> v) {
    std::vector<std::pair<int, int>> output;
    for (int i = 0; i < v.size(); ++i) {
        output.emplace_back(v[i], i);
    }
    return output;
}

int main() {
    std::vector<int> arr = {1, 2, 3, 4};
    std::vector<std::pair<int, int>> output = result(arr);
    for (auto p : output) {
        std::cout << "Number: " << p.first << ", Index: " << p.second << std::endl;
    }
    return 0;
}