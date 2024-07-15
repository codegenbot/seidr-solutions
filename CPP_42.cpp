#include <iostream>
#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> incr_list(const std::vector<int>& l) {
    std::vector<int> result = l;
    for (int &num : result) {
        num++;
    }
    return result;
}

int main() {
    std::vector<int> l1 = {1, 2, 3};
    std::vector<int> l2 = {1, 2, 4};

    if (issame(l1, l2)) {
        std::cout << "Lists are the same" << std::endl;
    } else {
        std::cout << "Lists are not the same" << std::endl;
    }

    std::vector<int> incremented_list = incr_list(l1);
    for (int num : incremented_list) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}