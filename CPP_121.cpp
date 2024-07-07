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

int testMain() { 
    int arr[] = {3, 13, 2, 9}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    std::vector<int> vec(arr, arr+n); // Initialize vector with array
    int sum = solution(vec);
    std::cout << "Result: " << sum << std::endl;
    return 0;
}

int main() {
    testMain();
    return 0;
}