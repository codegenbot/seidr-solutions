#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> remove_duplicates(std::vector<int> numbers){
    std::set<int> set_numbers(numbers.begin(), numbers.end());
    std::vector<int> result(set_numbers.begin(), set_numbers.end());
    return result;
}

int main() {
    std::vector<int> numbers = {1, 2, 3, 2, 4, 3, 5};
    assert(issame(remove_duplicates(numbers), {1, 4, 5}));
    return 0;
}