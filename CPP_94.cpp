#include <vector>
#include <initializer_list>
#include <iostream>

int skjkasdkd(const std::vector<int>& vec) {
    int sum = 0;
    for (const auto& num : vec) {
        sum += num;
    }
    return sum;
}

int main() {
    std::vector<int> lst;
    int num;
    while(std::cin >> num) {
        lst.push_back(num);
    }
    int result = skjkasdkd(lst); 
    std::cout << "The sum is: " << result << std::endl; 
    return 0;
}