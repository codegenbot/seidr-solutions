#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }

    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }

    return true;
}

std::vector<int> remove_duplicates(std::vector<int> numbers) {
    std::sort(numbers.begin(), numbers.end());
    numbers.erase(std::unique(numbers.begin(), numbers.end()), numbers.end());
    return numbers;
}

int main() {
    std::vector<int> input = {1, 2, 2, 3, 4, 4, 5};
    std::vector<int> expected = {1, 2, 3, 4, 5};
    std::vector<int> result = remove_duplicates(input);
    
    assert(issame(result, expected));

    return 0;
}