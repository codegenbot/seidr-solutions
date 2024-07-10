Here is the modified code:

#include <vector>
#include <iostream>

int main() {
    std::vector<int> lst({127, 97, 8192}); 
    int result = skjkasdkd(lst); 
    std::cout << "The sum is: " << result << std::endl; 
    return 0;
}

int skjasdk(const std::vector<int>& vec) {
    int sum = 0;
    for (const auto& num : vec) {
        sum += num;
    }
    return sum;
}