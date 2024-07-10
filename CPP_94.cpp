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
    int n;
    std::vector<int> lst;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    for(int i = 0; i < n; ++i)
    {
        int temp;
        std::cout << "Enter element no. " << i + 1 << ": ";
        std::cin >> temp;
        lst.push_back(temp);
    }
    int result = skjkasdkd(lst); 
    std::cout << "The sum is: " << result << std::endl; 
    return 0;
}