#include <vector>
#include <algorithm>

std::vector<int> rolling_max(std::vector<int> numbers) {
    std::vector<int> result;
    int max_num = numbers[0];
    for (int i = 0; i < numbers.size(); i++) {
        max_num = std::max(max_num, numbers[i]);
        result.push_back(max_num);
    }
    return result;
}

int main() {
    std::vector<int> output = rolling_max({3, 2, 3, 100, 3});
    std::vector<int> expected = {3, 3, 3, 100, 100};

    // Compare output with expected
    if (output == expected) {
        return 0; // Test passed
    } else {
        return 1; // Test failed
    }
}