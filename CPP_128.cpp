#include <vector>
#include <iostream>

int prod_signs(std::vector<int> arr) {
    int sign_product = 1;
    long long sum = 0;

    for (int num : arr) {
        if (num == 0) {
            return 0; // empty array or contains zero
        }
        sign_product *= (num > 0 ? 1 : (num < 0 ? -1 : 1));
        sum += abs(num);
    }

    return sign_product * sum;
}

int main() {
    std::vector<int> input = {-1, 1, 1, 0};
    int output = prod_signs(input);
    std::cout << "Output: " << output << std::endl;
    return 0;
}