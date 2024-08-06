#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b);
std::vector<int> remove_duplicates(std::vector<int> numbers);

namespace vec = std;

bool issame(vec::vector<int> a, vec::vector<int> b){
    return a == b;
}

vec::vector<int> remove_duplicates(vec::vector<int> numbers){
    std::sort(numbers.begin(), numbers.end());
    numbers.erase(std::unique(numbers.begin(), numbers.end()), numbers.end());
    return numbers;
}

int main() {
    assert(issame(remove_duplicates({1, 2, 3, 2, 4, 3, 5}), {1, 4, 5}));
    return 0;
}