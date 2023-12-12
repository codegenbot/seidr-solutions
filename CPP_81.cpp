```
#include <iostream>
#include <vector>

bool issame(std::vector<int>& v1, std::vector<int>& v2) {
    if (v1.size() != v2.size()) return false;
    for (int i = 0; i < v1.size(); i++) {
        if (v1[i] != v2[i]) return false;
    }
    return true;
}

int main() {
    std::vector<int> v1{1, 2, 3};
    std::vector<int> v2{4, 5, 6};
    if (issame(v1, v2)) {
        std::cout << "The vectors are the same" << std::endl;
    } else {
        std::cout << "The vectors are not the same" << std::endl;
    }
    return 0;
}
```