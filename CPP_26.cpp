#include <vector>
#include <algorithm>

std::vector<int> remove_duplicates(std::vector<int> numbers) {
    sort(numbers.begin(), numbers.end());
    numbers.erase(unique(numbers.begin(), numbers.end()), numbers.end());
    return numbers;
}

bool issame(int a, int b) {
    return a == b;
}