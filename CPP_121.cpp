```cpp
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
    std::vector<int> arr; 

    // Input array elements from the user
    int n;
    std::cout << "Enter number of elements: ";
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> num;
        arr.push_back(num);
    }

    // Call your function and print the result
    int result = solution(arr); 
    std::cout << "Result: " << result << std::endl;

    return 0;
}