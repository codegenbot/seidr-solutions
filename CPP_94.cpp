```cpp
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
    int n;
    std::cout << "Enter number of elements: ";
    std::cin >> n;
    std::cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        int temp;
        std::cin >> temp;
        lst.push_back(temp);
    } 
    int result = skjkasdkd(lst); 
    std::cout << "The sum is: " << result << std::endl; 
    return 0;
}