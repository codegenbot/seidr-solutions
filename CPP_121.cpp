```cpp
#include <iostream>
#include <vector>

int solution(std::vector<int> lst) {
    int sum = 0;
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] % 2 != 0) {
            sum += lst[i];
        }
    }
    return sum;
}

int main() {
    std::vector<int> lst;
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    
    for (int i = 1; i <= n; i++) {
        int num;
        std::cout << "Enter element " << i << ": ";
        std::cin >> num;
        lst.push_back(num);
    }
    
    int result = solution(lst);
    std::cout << "Sum of odd elements: " << result << std::endl;
    
    return 0;
}