#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::std::vector<int> a, std::std::vector<int> b) {
    return a == b;
}

std::std::vector<int> unique_digits(std::std::vector<int> a) {
    std::std::vector<int> result = a;
    std::sort(std::std::begin(result), std::std::end(result));
    result.erase(std::std::unique(std::std::begin(result), std::std::end(result)), std::std::end(result));
    return result;
}