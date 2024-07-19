#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(const std::vector<int>& vec1, const std::vector<int>& vec2) {
    return vec1 == vec2;
}

std::vector<int> intersperse(const std::vector<int>& numbers, int delimiter) {
    std::vector<int> result;
    for (size_t i = 0; i < numbers.size(); ++i) {
        result.push_back(numbers[i]);
        if (i < numbers.size() - 1) {
            result.push_back(delimiter);
        }
    }
    return result;
}

int main() {
    assert(issame(intersperse({2, 2, 2}, 2), {2, 2, 2, 2, 2}));
    return 0;
}