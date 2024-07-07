```cpp
#include <iostream>
#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) {
            sum += pow(num, 2);
        }
    }
    return sum;
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::vector<float> lst(n);

    for (float &num : lst) {
        std::cout << "Enter element: ";
        std::cin >> num;
    }

    long long result = double_the_difference(lst);
    std::cout << "The sum of squares of odd numbers is: " << result << std::endl;

    return 0;
}