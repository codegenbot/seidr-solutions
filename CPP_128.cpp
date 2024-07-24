```cpp
#include <iostream>
#include <vector>

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
    std::vector<int> arr = {1, 2, 3};
    int result = prod_signs(arr);
    std::cout << "Result: " << result << std::endl;
    return 0;
}