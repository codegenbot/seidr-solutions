#include <iostream>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

std::vector<int> pluck(std::vector<int> arr) {
    std::vector<int> result;
    for (int i : arr)
        result.push_back(i);
    return result;
}

int main() {
    std::vector<int> arr = {7, 9, 7, 1};
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    std::vector<int> vec;
    if (num % 2 == 0 && num < INT_MAX) {
        vec.push_back(num);
    }
    if (num != -1) {
        assert(issame(pluck({num}), arr));
    } else {
        assert(issame({}, arr));
    }
    return 0;
}