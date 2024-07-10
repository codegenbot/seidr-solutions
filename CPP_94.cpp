#include <vector>
#include <iostream>

int main() {
    std::vector<int> lst({127, 97, 8192}); 
    int result = 0;
    for (const auto& num : lst) {
        result += num;
    }
    std::cout << "The sum is: " << result << std::endl; 
    return 0;
}