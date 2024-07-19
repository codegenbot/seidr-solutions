#include <vector>
#include <cassert>

std::vector<int> intersperse(std::vector<int> numbers, int delimiter);

bool issame(std::vector<int> a, std::vector<int> b);

std::vector<int> intersperse(std::vector<int> numbers, int delimiter){
    std::vector<int> result;
    for (int i = 0; i < numbers.size(); ++i) {
        if (i > 0) {
            result.push_back(delimiter);
        }
        result.push_back(numbers[i]);
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b){
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