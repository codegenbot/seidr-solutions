#include <vector>
#include <iostream>

bool isSame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<int> even_odd_count(int num) {
    std::vector<int> result(2, 0);
    while (num != 0) {
        int digit = num % 10;
        if (digit % 2 == 0)
            result[0]++;
        else
            result[1]++;
        num /= 10;
    }
    return result;
}

int main() {
    std::vector<int> expectedCount = even_odd_count(0);
    if (!isSame(expectedCount, std::vector<int>{1, 0})) {
        std::cout << "Test failed. The count is not correct." << std::endl;
    } else {
        std::cout << "Test passed. The count is correct." << std::endl;
    }
    return 0;
}