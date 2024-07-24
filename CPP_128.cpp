#include <iostream>
#include <vector>

int main() {
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
        return product * sum > INT_MAX ? -32768 : product * sum;
    }

    // example usage
    std::vector<int> input = {1, -2, 3, 4};
    int output = prod_signs(input);
    std::cout << "Product of signs is: " << output << std::endl;

    return 0;
}