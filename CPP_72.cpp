```
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

bool will_it_fly(std::vector<int> q, int w) {
    std::string str = "";
    for (int i : q) {
        str += std::to_string(i);
    }
    if (str != std::string(str.rbegin(), str.rend()).s) return false; // not balanced
    int sum = 0;
    for (int i : q) {
        sum += i;
    }
    return sum <= w;
}

int main() {
    int n, w;
    std::cin >> n >> w;
    std::vector<int> q(n);
    for (int& x : q) std::cin >> x;
    if (will_it_fly(q, w)) {
        std::cout << "YES" << '\n';
    } else {
        std::cout << "NO" << '\n';
    }
    return 0;
}