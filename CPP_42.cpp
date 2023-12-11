```
#include <iostream>
#include <algorithm>
#include <vector>

bool issame(int a, int b) {
    return a == b;
}

void incr_list(std::vector<int>& v) {
    for (auto& x : v) {
        x++;
    }
}

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