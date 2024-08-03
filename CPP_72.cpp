```
#include <iostream>
#include <vector>
#include <algorithm>

bool will_it_fly(std::vector<int> q, int w) {
    std::vector<int> v(q);
    std::reverse(v.begin(), v.end());
    if (v != q)
        return false;
    int sum = 0;
    for (int i : q)
        sum += i;
    return sum <= w;
}

int main() {
    int n, w;
    std::cin >> n >> w;
    std::vector<int> q(n);
    for (int& x : q) {
        std::cin >> x;
    }
    if (will_it_fly(q, w)) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }
    return 0;
}