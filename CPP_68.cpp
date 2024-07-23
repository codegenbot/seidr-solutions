#include <vector>
#include <iostream>
#include <memory>

int count_even(int n) {
    int count = 0;
    for (int i = 2; i <= n; ++i) {
        if (i % 2 == 0) {
            ++count;
        }
    }
    return count;
}

std::vector<std::pair<int, int>> result(std::vector<int> v) {
    std::vector<std::pair<int, int>> output;
    for (int i = 0; i < v.size(); ++i) {
        output.push_back({v[i], i});
    }
    return output;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    std::vector<int> arr = {7, 9, 7, 1};
    bool same = issame(arr, {});
    for (auto p : result(arr)) {
        std::cout << "Number: " << p.first << ", Index: " << p.second << std::endl;
    }
    if(same) {
        std::cout << "The vectors are the same." << std::endl;
    } else {
        std::cout << "The vectors are not the same." << std::endl;
    }
    return 0;
}