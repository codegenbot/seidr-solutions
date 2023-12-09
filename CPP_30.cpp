```
#include <iostream>
#include <vector>

bool issame(std::vector<float> a, std::vector<float> b);

int main() {
    std::vector<float> l1 = {1, 2, 3, -4, 5};
    std::vector<float> l2 = {1, 2, 3, 4, 5};

    if (issame(get_positive(l1), get_positive(l2))) {
        std::cout << "The positive elements in l1 and l2 are the same" << std::endl;
    } else {
        std::cout << "The positive elements in l1 and l2 are not the same" << std::endl;
    }

    return 0;
}

bool issame(std::vector<float> a, std::vector<float> b) {
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
```