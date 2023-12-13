#include <iostream>
#include <vector>

std::pair<std::vector<int>, std::vector<int>> cut_vector(const std::vector<int>& input) {
    int n = input.size();
    int diff = INT_MAX;
    int index = -1;
    
    for (int i = 1; i < n; i++) {
        int left_sum = 0;
        int right_sum = 0;
        
        for (int j = 0; j < i; j++) {
            left_sum += input[j];
        }
        
        for (int j = i; j < n; j++) {
            right_sum += input[j];
        }
        
        int current_diff = abs(left_sum - right_sum);
        
        if (current_diff < diff) {
            diff = current_diff;
            index = i;
        }
    }
    
    std::vector<int> left_vector(input.begin(), input.begin() + index);
    std::vector<int> right_vector(input.begin() + index, input.end());
    
    return std::make_pair(left_vector, right_vector);
}

int main() {
    int n;
    std::cin >> n;
    
    std::vector<int> input(n);
    for (int i = 0; i < n; i++) {
        std::cin >> input[i];
    }
    
    std::pair<std::vector<int>, std::vector<int>> result = cut_vector(input);
    
    for (int num : result.first) {
        std::cout << num << std::endl;
    }
    
    for (int num : result.second) {
        std::cout << num << std::endl;
    }
    
    return 0;
}