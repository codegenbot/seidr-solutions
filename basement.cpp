#include <iostream>
#include <vector>
#include <ostream>

int basement(std::vector<int> v) {
    int sum = 0;
    for (int i = 0; i < v.size(); i++) {
        sum += v[i];
        if (sum < 0) return i + 1;
    }
    return -1;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> v(n);
    for (int i = 0; i < n; i++) {
        std::cin >> v[i];
    }
    std::cout << basement(v) << std::endl;
    return 0;
}