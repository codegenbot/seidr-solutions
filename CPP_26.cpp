```cpp
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

int main(){
    std::vector<int> numbers = {1, 2, 3, 2, 4, 3, 5};
    std::vector<int> output = removeDuplicates(numbers);
    return 0;
}