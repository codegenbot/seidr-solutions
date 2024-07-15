#include <vector>
#include <iostream>

int basement(std::vector<int> v) {
    int sum = 0; 
    int i = 0;
    for (auto num : v) {
        sum += num;
        if (sum < 0)
            return i + 1;
        i++;
    }
    return -1;
}

int main() {
    std::vector<int> inputVector = {10, -20, 30, 5, -3};
    int result = basement(inputVector);
    if(result != -1) {
        std::cout << "The first index where the sum becomes negative is: " << result << std::endl;
    } else {
        std::cout << "The sum remains non-negative for all indices." << std::endl;
    }
    return 0;
}