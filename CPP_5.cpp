#include <vector>

std::vector<int> intersperse(std::vector<int> numbers, int delimeter) {
    std::vector<int> result;
    if (numbers.empty()) {
        return result;
    }

    result.push_back(numbers[0]);
    for (int i = 1; i < numbers.size(); ++i) {
        result.push_back(delimeter);
        result.push_back(numbers[i]);
    }

    return result;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(intersperse({2, 2, 2}, 2), {2, 2, 2, 2, 2}));
}