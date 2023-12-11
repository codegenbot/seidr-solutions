```
#include <iostream>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> incr_list(std::vector<int> l) {
    for (auto& i : l) {
        i++;
    }
    return l;
}

int main() {
    std::vector<int> v = {1, 2, 3};
    auto result = incr_list(v);
    if (issame(result, v)) {
        std::cout << "The lists are the same" << std::endl;
    } else {
        std::cout << "The lists are not the same" << std::endl;
    }
    return 0;
}
```