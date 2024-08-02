#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& v1, const std::vector<int>& v2){
    if(v1.size() != v2.size()){
        return false;
    }
    for(int i=0; i<v1.size(); i++){
        if(v1[i] != v2[i]){
            return false;
        }
    }
    return true;
}

std::vector<int> rolling_max(std::vector<int> numbers);

int main() {
    std::vector<int> test_input = {1, 3, 5, 2, 6, 4};
    std::vector<int> expected_output = {1, 3, 5, 5, 6, 6};
    std::vector<int> computed_output = rolling_max(test_input);
    
    assert(issame(expected_output, computed_output));

    assert(issame(rolling_max({3, 2, 3, 100, 3}), {3, 3, 3, 100, 100}));
}

std::vector<int> rolling_max(std::vector<int> numbers){
    std::vector<int> result;
    int max_num = numbers[0];
    for(int i=0; i<numbers.size(); i++){
        max_num = std::max(max_num, numbers[i]);
        result.push_back(max_num);
    }
    return result;
}