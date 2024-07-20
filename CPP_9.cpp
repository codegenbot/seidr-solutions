#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> rolling_max(std::vector<int> numbers);

int main() {
    std::vector<int> numbers = {1, 3, 5, 2, 8};
    std::vector<int> result = rolling_max(numbers);
    for (int num : result) {
        std::cout << num << " ";
    }
    return 0;
}

std::vector<int> rolling_max(std::vector<int> numbers) {
    std::vector<int> result;
    int max_num = numbers[0];
    for (int i = 0; i < numbers.size(); ++i) {
        max_num = std::max(max_num, numbers[i]);
        result.push_back(max_num);
    }
    return result;
}