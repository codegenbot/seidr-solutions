#include <vector>
#include <iostream>
#include <initializer_list>

std::vector<int> filter_integers(std::vector<int> input) {
    std::vector<int> result;
    for (int i : input) {
        if (i > 0) {
            result.push_back(i);
        }
    }
    return result;
}

bool isEqualTo(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    std::vector<int> test1 = filter_integers({3, 3, 3});
    std::vector<int> test2 = {3, 3, 3};
    
    if (!isEqualTo(test1, test2)) {
        std::cout << "Test failed." << std::endl;
    } else {
        std::cout << "Test passed." << std::endl;
    }
    return 0;
}