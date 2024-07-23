#include <iostream>
#include <vector>

std::vector<int> pluck(std::vector<int> arr) {
    std::vector<int> result;
    if (arr.empty()) return result;
    
    int minEvenValue = INT_MAX;
    int minIndex = -1;
    
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < minEvenValue) {
            minEvenValue = arr[i];
            minIndex = i;
        }
    }
    
    result.push_back(minEvenValue);
    result.push_back(minIndex);
    
    return result;
}

int main() {
    std::vector<int> input;
    // Add elements to the vector
    for (int i = 0; i < 10; i++) {
        int num;
        std::cin >> num;
        input.push_back(num);
    }
    std::vector<int> output = pluck(input);
    
    if (!output.empty()) {
        std::cout << "Minimum even value: " << output[0] << std::endl;
        std::cout << "Index of minimum even value: " << output[1] << std::endl;
    } else {
        std::cout << "No even values found." << std::endl;
    }
    
    return 0;
}