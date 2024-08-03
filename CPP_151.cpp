```
#include <iostream>
#include <vector>
#include <cmath>

int main() {
    std::vector<float> lst;
    long long odd_sum = 0;

    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        float x;
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> x;
        lst.push_back(x);
    }

    long long double_the_difference(vector<float> lst) {
        long long sum = 0;
        for (float x : lst) {
            if (x > 0 && floor(x) == x) { // Check if number is positive and integer
                if (x % 2 != 0) { // Check if number is odd
                    sum += pow(x, 2);
                }
            }
        }
        return sum;
    }

    long long result = double_the_difference(lst);

    std::cout << "The sum of the squares of all positive integer elements in the list is: " << result << std::endl;

    return 0;
}