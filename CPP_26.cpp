```
#include <vector>
#include <algorithm>

bool same(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> removeDuplicates(std::vector<int> numbers) {
    std::vector<int> result(numbers.begin(), numbers.end());
    auto it = std::unique(result.begin(), result.end());
    result.erase(it, result.end());
    return result;
}

int main() {
    assert(same(removeDuplicates({1, 2, 3, 2, 4, 3, 5}), {1, 2, 3, 4, 5}));
    std::vector<int> numbers = {1, 2, 3, 2, 4, 3, 5};
    numbers = removeDuplicates(numbers);
    for (int i : numbers) {
        std::cout << i << " ";
    }
    return 0;
}