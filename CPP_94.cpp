#include <vector>
#include <iostream>

int sumVector(const std::vector<int>& vec) {
    int sum = 0;
    for (const auto& num : vec) {
        sum += num;
    }
    return sum;
}

int testMain() {
    std::vector<int> lst({127, 97, 8192}); 
    int result = sumVector(lst); 
    std::cout << "The sum is: " << result << std::endl; 
    return 0;
}