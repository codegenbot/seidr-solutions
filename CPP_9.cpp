#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> rolling_max(std::vector<int> numbers){
    std::vector<int> result;
    size_t max_num = numbers[0];
    for(size_t i = 0; i < numbers.size(); i++){
        max_num = std::max(max_num, numbers[i]);
        result.push_back(max_num);
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

int main(){
    std::vector<int> expected_result = {3, 3, 3, 100, 100};
    assert(issame(rolling_max({3, 2, 3, 100, 3}), expected_result));
    return 0;
}