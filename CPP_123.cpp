#include <iostream>
#include <vector>
#include <algorithm>

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

std::vector<int> get_odd_collatz(int n) {
    std::vector<int> result;
    while (n != 1) {
        result.push_back(n);
        n = n % 2 == 0 ? n / 2 : 3 * n + 1;
    }
    result.push_back(1);
    std::sort(result.begin(), result.end());
    std::vector<int> odd_result;
    for (int num : result) {
        if (num % 2 != 0) {
            odd_result.push_back(num);
        }
    }
    return odd_result;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> result = get_odd_collatz(n);
    for (int num : result) {
        std::cout << num << " ";
    }
    return 0;
}