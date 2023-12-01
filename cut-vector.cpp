#include <vector>
#include <iostream>

std::pair<std::vector<int>, std::vector<int>> cut_vector(const std::vector<int>& input) {
    std::pair<std::vector<int>, std::vector<int>> result;
    int min_diff = INT_MAX;
    int index = -1;
    
    // Find the spot where the difference is minimum
    for (int i = 0; i < input.size(); i++) {
        int sum_left = 0;
        int sum_right = 0;
        
        // Calculate the sum of elements on the left side
        for (int j = 0; j < i; j++) {
            sum_left += input[j];
        }
        
        // Calculate the sum of elements on the right side
        for (int j = i; j < input.size(); j++) {
            sum_right += input[j];
        }
        
        // Check if the difference is minimum
        int diff = abs(sum_left - sum_right);
        if (diff < min_diff) {
            min_diff = diff;
            index = i;
        }
    }
    
    // Set the resulting subvectors
    for (int i = 0; i < index; i++) {
        result.first.push_back(input[i]);
    }
    for (int i = index; i < input.size(); i++) {
        result.second.push_back(input[i]);
    }
    
    return result;
}

int main() {
    std::vector<int> input;
    int n;
    
    // Read the input vector
    while (std::cin >> n) {
        input.push_back(n);
    }
    
    // Cut the vector
    std::pair<std::vector<int>, std::vector<int>> result = cut_vector(input);
    
    // Print the resulting subvectors
    for (int i = 0; i < result.first.size(); i++) {
        std::cout << result.first[i] << std::endl;
    }
    for (int i = 0; i < result.second.size(); i++) {
        std::cout << result.second[i] << std::endl;
    }
    
    return 0;
}