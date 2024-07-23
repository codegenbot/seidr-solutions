#include <vector>
#include <algorithm>

bool same(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> removeDuplicates(std::vector<int> numbers) {
    std::vector<int> result = numbers;
    auto it = std::unique(result.begin(), result.end());
    it = result.erase(it, result.end());
    return result;
}

int main(){
    assert(same(removeDuplicates({1, 2, 3, 2, 4, 3, 5}), {1, 2, 3, 4, 5}));
    return 0;
}