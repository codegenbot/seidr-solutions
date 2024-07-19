#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(const vector<int>& v1, const vector<int>& v2) {
    return v1 == v2;
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