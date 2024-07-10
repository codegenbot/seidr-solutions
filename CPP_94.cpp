#include <iostream>
#include <vector>

int sumVector(const std::vector<int>& lst) {
    int result = 0;
    for (const auto& num : lst) {
        result += num;
    }
    return result;
}

int main() {
    std::vector<int> lst({127, 97, 8192}); 
    int result = sumVector(lst); 
    std::cout << "The sum is: " << result << std::endl; 
    return 0;
}