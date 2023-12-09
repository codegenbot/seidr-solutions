```
#include <iostream>
#include <vector>

std::vector<int> incr_list(std::vector<int> l) {
    for (auto& i : l) {
        i++;
    }
    return l;
}

int main() {
    std::vector<int> v = {1, 2, 3};
    auto result = incr_list(v);
    for (auto i : result) {
        std::cout << i << " ";
    }
    return 0;
}
```