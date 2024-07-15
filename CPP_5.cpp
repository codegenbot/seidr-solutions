#include <vector>

namespace std;

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }

    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }

    return true;
}

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