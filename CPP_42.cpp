#include <iostream>
#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> incr_list(const std::vector<int>& l) {
    std::vector<int> result;
    for (int num : l) {
        result.push_back(num + 1);
    }
    return result;
}

int main() {
    int n;
    std::vector<int> a, b;

    std::cin >> n;
    a.resize(n);
    for (int& num : a) {
        std::cin >> num;
    }

    std::cin >> n;
    b.resize(n);
    for (int& num : b) {
        std::cin >> num;
    }

    bool result = issame(a, b);
    std::vector<int> incremented = incr_list(a);

    return 0;
}