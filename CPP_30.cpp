```
#include <iostream>
#include <vector>

bool issame(std::vector<float> a, std::vector<float> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<float> get_positive(std::vector<float> my_list) {
    std::vector<float> positive_elements;
    for (int i = 0; i < my_list.size(); i++) {
        if (my_list[i] > 0) {
            positive_elements.push_back(my_list[i]);
        }
    }
    return positive_elements;
}

int main() {
    std::vector<float> l1 = {1, 2, 3, -4, 5};
    std::vector<float> l2 = {1, 2, 3, 4, 5};
    std::cout << "Positive elements in l1: ";
    for (int i = 0; i < get_positive(l1).size(); i++) {
        std::cout << get_positive(l1)[i] << " ";
    }
    std::cout << std::endl;
    if (issame(get_positive(l1), get_positive(l2))) {
        std::cout << "The positive elements in l1 and l2 are the same" << std::endl;
    } else {
        std::cout << "The positive elements in l1 and l2 are not the same" << std::endl;
    }
    return 0;
}
```