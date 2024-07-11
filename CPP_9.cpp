#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b);

std::vector<int> rolling_max(std::vector<int> numbers){
    std::vector<int> result;
    int max_num = INT_MIN;
    for(int i = 0; i < numbers.size(); i++){
        max_num = std::max(max_num, numbers[i]);
        result.push_back(max_num);
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

int main(){
    std::vector<int> test_numbers = {1, 3, 5, 2, 6, 4};
    std::vector<int> expected_result = {1, 3, 5, 5, 6, 6};
    std::vector<int> result = rolling_max(test_numbers);

    assert(issame(result, expected_result));
    
    return 0;
}