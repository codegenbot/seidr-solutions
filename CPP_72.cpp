```cpp
#include <iostream>
#include <vector>

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
    std::cout << "Enter number of quails: ";
    std::cin >> n;
    std::vector<int> q(n);
    std::cout << "Enter weights of quails: ";
    for (int i = 0; i < n; ++i)
        std::cin >> q[i];
    std::cout << "Will it fly? " << (will_it_fly(q, w) ? "Yes" : "No") << std::endl;
    return 0;
}