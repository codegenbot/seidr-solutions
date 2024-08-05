#include <vector>
#include <cassert>
#include <algorithm>
#include <iostream>

bool is_same(const std::vector<int>& a, const std::vector<int>& b){
    if(a.size() != b.size()) {
        return false;
    }
      
    return std::equal(a.begin(), a.end(), b.begin());
}

std::vector<int> intersperse(const std::vector<int>& numbers, int delimiter){
    std::vector<int> result;
    for(size_t i = 0; i < numbers.size(); i++){
        result.push_back(numbers[i]);
        if(i < numbers.size() - 1){
            result.push_back(delimiter);
        }
    }
    return result;
}

int main(){
    std::vector<int> expected = {2, 2, 2, 2, 2};
    assert(is_same(intersperse({2, 2, 2}, 2), expected));
    
    return 0;
}