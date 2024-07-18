#include <vector>
#include <cassert>

std::vector<int> intersperse(std::vector<int> numbers, int delimiter);

std::vector<int> intersperse(std::vector<int> numbers, int delimiter) {
    std::vector<int> result;
    for (int i = 0; i < numbers.size(); ++i) {
        result.push_back(numbers[i]);
        if (i < numbers.size() - 1) {
            result.push_back(delimiter);
        }
    }
    return result;
}

int main() {
    assert(intersperse({2, 2, 2}, 2) == std::vector<int>{2, 2, 2, 2, 2});
    return 0;
}