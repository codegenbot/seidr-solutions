```cpp
#include <vector>
#include <iostream>

int prod_signs(std::vector<int> arr) {
    int product = 1;
    long sum = 0;
    for (int x : arr) {
        if (x == 0) {
            return 0;
        }
        product *= abs(x);
        sum += abs(x);
    }
    return (product * sum > INT_MAX ? -32768 : product * sum);
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    
    std::vector<int> arr(n);
    
    for(int i = 0; i < n; i++) {
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> arr[i];
    }
    
    int result = prod_signs(arr);
    std::cout << "The product of signs is: " << result << std::endl;
    
    return 0;
}