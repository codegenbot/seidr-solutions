#include <vector>
#include <cassert>
#include <algorithm>

std::vector<int> intersperse(const std::vector<int>& numbers, int delimiter){
    std::vector<int> result;
    if(numbers.empty()){
        return result;
    }
    result.push_back(numbers[0]);
    for(size_t i = 1; i < numbers.size(); ++i){
        result.push_back(delimiter);
        result.push_back(numbers[i]);
    }
    return result;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

int main() {
    assert(issame(intersperse({2, 2, 2}, 2), {2, 2, 2, 2, 2}));
    return 0;
} 