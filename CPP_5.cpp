#include <vector>
#include <cassert>

std::vector<int> intersperse(std::vector<int> numbers, int delimiter) {
    std::vector<int> result;
    int size = numbers.size();
    for (int i=0; i<size; i++) {
        result.push_back(numbers[i]);
        if (i != size-1) {
            result.push_back(delimiter);
        }
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i=0; i<a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(issame(intersperse(std::vector<int>{2, 2, 2}, 2), std::vector<int>{2, 2, 2, 2, 2}));
    return 0;
}