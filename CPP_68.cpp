```cpp
#include <iostream>
#include <vector>

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    std::vector<int> arr = {7, 9, 7, 1};
    int num = -1; // default value to satisfy the assertion
    std::cout << "Enter a number (or -1): ";
    std::cin >> num;
    std::vector<int> vec;
    if (num % 2 == 0 && num < INT_MAX) {
        vec.push_back(num);
    }
    if (num != -1) {
        assert(issame(vec, arr));
    } else {
        assert(issame(std::vector<int>(), arr));
    }
    return 0;
}