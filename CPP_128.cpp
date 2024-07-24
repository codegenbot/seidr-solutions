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
    std::cout << "product * sum: " << product * sum << std::endl;
    return product * sum > INT_MAX ? -32768 : product * sum;
}

int main() {
    int n;
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> n;

    std::vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> arr[i];
    }

    int result = prod_signs(arr);

    return 0;
}