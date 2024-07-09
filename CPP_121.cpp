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
    std::vector<int> input;
    int n;
    
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    input.resize(n);

    for (int i = 0; i < n; i++) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> input[i];
    }

    int result = solution(input);
    std::cout << "The sum of odd numbers is: " << result;
    
    return 0;
}