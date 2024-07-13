#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> v(n);
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        std::cin >> v[i];
        sum += (v[i] / 3) - 2;
    }
    std::cout << sum << std::endl;
    return 0;
}