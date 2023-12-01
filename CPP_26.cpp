#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>
#include <set>

std::vector<int> remove_duplicates(std::vector<int> numbers) {
    std::set<int> uniqueNumbers(numbers.begin(), numbers.end());
    std::vector<int> result(uniqueNumbers.begin(), uniqueNumbers.end());
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(remove_duplicates({1, 2, 3, 2, 4, 3, 5}), {1, 4, 5}));
    return 0;
}