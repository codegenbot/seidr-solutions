```
#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> v;
    int n;
    while (std::cin >> n) {
        v.push_back(n);
    }
    for (auto it = v.begin(); it != v.end(); ++it) {
        if (*it % 2 == 0) {
            std::cout << *it << " ";
        }
    }
    return 0;
}
```