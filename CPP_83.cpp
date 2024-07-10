```cpp
#include <iostream>
#include <cmath>

int starts_one_ends(int n) {
    int count = 0;
    for (int i = 1; i <= pow(10, n-1); i++) {
        if ((i / pow(10, n-1)) % 10 == 1 || i % 10 == 1) {
            count++;
        }
    }
    return count;

}

int main() {
    int n;
    std::cout << "Enter a positive integer: ";
    std::cin >> n;
    std::cout << "The count of the numbers of " << n << "-digit positive integers that start or end with 1 is: " << starts_one_ends(n) << std::endl;
}