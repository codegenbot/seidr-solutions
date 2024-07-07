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
    int arr[] = {3, 13, 2, 9}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    std::vector<int> arrVector(arr, arr + n); 
    int result = solution(arrVector); 
    std::cout << "Result: " << result << std::endl;
    return 0;
}