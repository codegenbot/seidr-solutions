#include <vector>
#include <iostream>

bool issame(std::vector<int> a, std::vector<int> b);

std::vector<int> incr_list(std::vector<int> l);

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> incr_list(std::vector<int> l) {
    std::vector<int> result;
    for (int num : l) {
        result.push_back(num + 1);
    }
    return result;
}

int main() {
    std::vector<int> a = {1, 2, 3};
    std::vector<int> b = {1, 2, 3};

    if (issame(a, b)) {
        std::vector<int> incremented = incr_list(a);
        for (int num : incremented) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}