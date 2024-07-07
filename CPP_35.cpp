```cpp
#include <algorithm>
#include <cmath>

int main() {
    int n;
    std::cin >> n;
    int l[n];
    for(int i = 0; i < n; i++) {
        std::cin >> l[i];
    }
    std::cout << abs(*std::max_element(l, l+n)) << '\n';
}