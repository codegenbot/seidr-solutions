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

std::vector<int> incr_list(const std::vector<int>& v) {
    std::vector<int> result;
    for (auto& x : v) {
        result.push_back(x + 1);
    }
    return result;
}

int main() {
    std::vector<int> a = {1, 2, 3};
    std::vector<int> b = incr_list(a);
    if (issame(a, b)) {
        std::cout << "The two vectors are the same." << std::endl;
    } else {
        std::cout << "The two vectors are not the same." << std::endl;
    }
    return 0;
}
```