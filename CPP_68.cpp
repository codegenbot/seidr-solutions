#include <iostream>
#include <vector>

std::vector<int> pluck(std::vector<int> arr) {
    std::vector<int> result;
    
    if (arr.empty()) {
        return result;
    }
    
    int minEven = INT_MAX;
    int minIndex = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < minEven) {
            minEven = arr[i];
            minIndex = i;
        }
    }
    
    result.push_back(minEven);
    result.push_back(minIndex);
    return result;
}

int main() {
    std::vector<int> input;
    int num;
    while(std::cin >> num) {
        input.push_back(num);
    }
    if(input.size() == 1) {
        std::cout << "You entered one element." << std::endl;
    } else {
        std::vector<int> output = pluck(input);
        std::cout << "Min even number: " << output[0] << ", Index of min even number: " << output[1] << std::endl;
    }
    
    return 0;
}
