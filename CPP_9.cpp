#include <initializer_list>
#include <vector>
#include <iostream>

bool issame(std::vector<int> a, std::vector<int> b);
std::vector<int> rolling_max(std::vector<int> numbers);

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i)
        if (a[i] != b[i]) return false;
    return true;
}

std::vector<int> rolling_max(std::vector<int> numbers) {
    std::vector<int> result;
    int max = INT_MIN;

    for (int num : numbers) {
        if (num > max) {
            max = num;
        }
        result.push_back(max);
    }

    return result;
}

std::vector<int> rolling_max(std::vector<int> numbers, std::vector<int> expected) {
    return rolling_max(numbers);
}

int main() {
    std::vector<int> nums = {3, 2, 3, 100, 3};
    if (issame(rolling_max(nums), nums)) {
        std::cout << "Test passed";
    } else {
        std::cout << "Test failed";
    }
}