#include <vector>

std::vector<int> rolling_max(std::vector<int> numbers) {
    std::vector<int> result;
    for (size_t i = 0; i < numbers.size(); ++i) {
        int max_val = numbers[i];
        for (size_t j = i + 1; j < numbers.size(); ++j) {
            if (numbers[j] > max_val) {
                max_val = numbers[j];
            }
        }
        result.push_back(max_val);
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) { return a == b; }