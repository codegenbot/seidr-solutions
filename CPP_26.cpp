#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> remove_duplicates(std::vector<int> numbers){
    std::vector<int> uniqueNumbers;
    for (int num : numbers) {
        if (std::count(numbers.begin(), numbers.end(), num) == 1) {
            uniqueNumbers.push_back(num);
        }
    }
    return uniqueNumbers;
}

int main() {
    assert(issame(remove_duplicates({1, 2, 3, 2, 4, 3, 5}), {1, 4, 5}));
    return 0;
}