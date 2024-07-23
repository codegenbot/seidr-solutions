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

bool issame(std::vector<int> a, std::vector<int> b) {
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

int new_main() {
    std::vector<int> arr1 = {7, 9, 7, 1};
    int even_count = count_even(10);
    for (int i = 0; i < arr1.size(); ++i) {
        if (arr1[i] % 2 == 0) {
            std::cout << "Number: " << arr1[i] << ", Index: " << i << std::endl;
        }
    }
    return 0;
}