#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> sort_third(std::vector<int> l) {
    std::sort(l.begin(), l.end(), [](int a, int b) {
        return a % 3 == 0 ? b % 3 == 0 ? a > b : true : b % 3 == 0 ? false : a > b;
    });
    return l;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    std::vector<int> result = sort_third({5, 6, 3, 4, 8, 9, 2, 1});
    std::vector<int> expected = {2, 6, 3, 4, 8, 9, 5, 1};
    
    if (issame(result, expected)) {
        std::cout << "Result is correct." << std::endl;
    } else {
        std::cout << "Result is incorrect." << std::endl;
    }

    return 0;
}