#include <vector>
#include <cassert>

std::vector<int> intersperse(std::vector<int> numbers, int delimiter){
    std::vector<int> result;
    if(numbers.empty()){
        return result;
    }
    for(int i = 0; i < numbers.size() - 1; ++i){
        result.push_back(numbers[i]);
        result.push_back(delimiter);
    }
    result.push_back(numbers.back());
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

int main() {
    assert(issame(intersperse({2, 2, 2}, 2), {2, 2, 2, 2, 2}));
}