#include <iostream>
#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& v1, const std::vector<int>& v2){
    return v1[0] == v2[0] && v1[1] == v2[1];
}

std::vector<int> find_closest_elements(std::vector<int>& numbers) {
    std::sort(numbers.begin(), numbers.end());
    int min_diff = numbers[1] - numbers[0];
    std::vector<int> result = {numbers[0], numbers[1]};
    for(int i = 1; i < numbers.size() - 1; ++i){
        if(numbers[i+1] - numbers[i] < min_diff){
            min_diff = numbers[i+1] - numbers[i];
            result = {numbers[i], numbers[i+1]};
        }
    }
    return {result[0], result[1]};
}

int main() {
    std::vector<int> numbers = {5, 8, 10, 15, 20, 25};
    std::vector<int> expected_result = {8, 10};
    
    std::vector<int> closest_elements = find_closest_elements(numbers);
    
    if(issame(closest_elements, expected_result)){
        std::cout << "Test Passed" << std::endl;
    } else {
        std::cout << "Test Failed" << std::endl;
    }
    
    return 0;
}