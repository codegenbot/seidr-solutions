#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) { return a == b; }

std::vector<int> rolling_max(std::vector<int> numbers) {
    std::vector<int> result;
    for (int i = 0; i < numbers.size(); i++) {
        int max_val = numbers[i];
        for (int j = i + 1; j < numbers.size(); j++) {
            max_val = std::max(max_val, numbers[j]);
        }
        result.push_back(max_val);
    }
    return result;
}