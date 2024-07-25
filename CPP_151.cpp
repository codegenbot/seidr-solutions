#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && std::floor(num) == num) { // check if number is positive and integer
            if (num % 2 != 0) { // check if number is odd
                sum += std::pow(num, 2);
            }
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {1.5f, 3.5f, -4.5f};
    long long result = double_the_difference(lst);
    std::cout << "The difference is: " << result << std::endl;
    return 0;
}