#include <iostream>
#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> incr_list(const std::vector<int>& l) {
    std::vector<int> result = l;
    for (int &num : result) {
        num++;
    }
    return result;
}

int main() {
    std::vector<int> a, b;
    int n;
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        int num;
        std::cin >> num;
        a.push_back(num);
    }
    for (int i = 0; i < n; ++i) {
        int num;
        std::cin >> num;
        b.push_back(num);
    }

    if (issame(a, b)) {
        std::cout << "Vectors are the same\n";
    } else {
        std::cout << "Vectors are different\n";
    }

    std::vector<int> c;
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        int num;
        std::cin >> num;
        c.push_back(num);
    }

    std::vector<int> result = incr_list(c);
    for (int num : result) {
        std::cout << num << " ";
    }

    return 0;
}