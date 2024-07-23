#include <vector>
#include <iostream>

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

bool checkVectorsEqual(std::vector<int> a, std::vector<int> b) {
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

std::vector<int> pluck(std::vector<int> v) {
    std::vector<int> output;
    for (int i = 0; i < v.size(); ++i) {
        if (v[i] % 2 != 0) {
            output.push_back(v[i]);
        }
    }
    return output;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return checkVectorsEqual(a, b);
}

int main() {
    std::vector<int> arr1 = {7, 9, 7, 1};
    std::vector<int> plucked = pluck(arr1);
    assert(issame(plucked, {}));
    
    for (auto p : result(arr1)) {
        std::cout << "Number: " << p.first << ", Index: " << p.second << std::endl;
    }
    return 0;
}