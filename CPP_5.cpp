#include <vector>

template <typename T>
std::vector<T> intersperse(std::vector<T> numbers, T delimiter) {
    std::vector<T> result;
    for (size_t i = 0; i < numbers.size(); ++i) {
        result.push_back(numbers[i]);
        if (i != numbers.size() - 1) {
            result.push_back(delimiter);
        }
    }
    return result;
}