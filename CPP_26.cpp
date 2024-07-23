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