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

int main() {
    // Test the rolling_max function
    std::vector<int> input = {1, 3, 5, 2, 4, 6};
    std::vector<int> expected_output = {1, 3, 5, 5, 5, 6};
    std::vector<int> result = rolling_max(input);
    assert(issame(result, expected_output));
    
    return 0;
}