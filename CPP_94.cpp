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
    std::cout << "Enter the number of elements: ";
    std::cin >> n; 
    for(int i=0;i<n;i++) {
        int x; 
        std::cout << "Enter element #"<<i+1<<":";
        std::cin >> x;
        lst.push_back(x);
    } 
    int result = skjkasdkd(lst); 
    std::cout << "The sum is: " << result << std::endl; 
    return 0;
}