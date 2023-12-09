#include <iostream>
#include <vector>

std::vector<float> get_positive(std::vector<float> l) {
    std::vector<float> positive;
    for (auto i : l) {
        if (i > 0) {
            positive.push_back(i);
        }
    }
    return positive;
}

bool issame(std::vector<float> a, std::vector<float> b){
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

int main() {
    std::vector<float> l1{1, 2, 3, -4, 5};
    std::vector<float> l2{1, 2, 3, 4, 5};
    std::cout << "Positive elements in l1: ";
    for (auto i : get_positive(l1)) {
        std::cout << i << " ";
    }
    std::cout << "\n";
    if (issame(get_positive(l1), get_positive(l2))) {
        std::cout << "The positive elements in l1 and l2 are the same\n";
    } else {
        std::cout << "The positive elements in l1 and l2 are not the same\n";
    }
    return 0;
}