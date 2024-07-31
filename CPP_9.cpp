#include <vector>

std::vector<int> rolling_max(std::vector<int> numbers) {
    if (numbers.empty()) return {};

    std::vector<int> result;
    int window_size = 3; // Define the window size for rolling max

    for (size_t i = 0; i < numbers.size(); ++i) {
        int max_num = INT_MIN;
        for (int j = i; j < i + window_size && j < numbers.size(); ++j) {
            max_num = std::max(max_num, numbers[j]);
        }
        result.push_back(max_num);
    }

    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) { return a == b; }