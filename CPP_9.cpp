#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> rolling_max(std::vector<int> numbers){
    std::vector<int> result;
    if(numbers.empty()) return result;
    
    int max_so_far = numbers[0];
    result.push_back(max_so_far);
    
    for(int i = 1; i < numbers.size(); ++i){
        max_so_far = std::max(max_so_far, numbers[i]);
        result.push_back(max_so_far);
    }
    
    return result;
}

int main(){
    assert(issame(rolling_max({3, 2, 3, 100, 3}), {3, 3, 3, 100, 100}));
    return 0;
}