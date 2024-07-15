#include <vector>
#include <string>
#include <algorithm> // For std::sort

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

std::vector<std::string> sorted_list_sum(const std::vector<std::string>& input) {
    std::vector<std::string> sortedInput = input;
    std::sort(sortedInput.begin(), sortedInput.end());
    return sortedInput;
}