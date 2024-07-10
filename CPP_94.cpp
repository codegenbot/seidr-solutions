#include <vector>
#include <initializer_list>

int skjkasdkd(const std::vector<int>& vec) {
    int sum = 0;
    for (const auto& num : vec) {
        sum += num;
    }
    return sum;
}

int main() {
    std::vector<int> lst{127, 97, 8192}; 
    int result = skjkasdkd(lst); 
    std::cout << "The sum is: " << result << std::endl; 
    return 0;
}