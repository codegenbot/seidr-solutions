```
#include <iostream>
#include <vector>

int solution(std::vector<int> arr) {
    int sum = 0;
    for (int i : arr) {
        if (i % 2 == 1)
            sum += i;
    }
    return sum;
}

int main() { 
    int n; 
    std::cout << "Enter the number of elements: ";
    std::cin >> n; 
    std::vector<int> arr(n); 
    for (int i = 0; i < n; ++i) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> arr[i]; 
    }
    int result = solution(arr); 
    std::cout << "Result: " << result << std::endl;
    return 0;
}