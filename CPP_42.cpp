```
#include <iostream>
#include <vector>

bool issame(std::vector<int>& a, std::vector<int>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<int> incr_list(const std::vector<int>& l1) {
    std::vector<int> result;
    for (int i = 0; i < l1.size(); i++) {
        result.push_back(l1[i] + 1);
    }
    return result;
}

int main() {
    std::vector<int> v1 = {1, 2, 3};
    std::vector<int> v2 = incr_list(v1);
    if (issame(v1, v2)) {
        std::cout << "The two vectors are the same." << std::endl;
    } else {
        std::cout << "The two vectors are not the same." << std::endl;
    }
    return 0;
}
```