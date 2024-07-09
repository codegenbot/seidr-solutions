#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> unique_digits(std::vector<int> a) {
    std::vector<int> result = a;
    for (int &num : result) {
        std::sort(std::begin(result), std::end(result));
        result.erase(std::unique(std::begin(result), std::end(result)), std::end(result));
    }
    return result;
}

int main() {
    std::vector<int> digits = {135, 103, 31};

    assert(unique_digits(digits) == std::vector<int>{31, 103, 135});

    return 0;
}