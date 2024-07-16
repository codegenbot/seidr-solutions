#include <iostream>
#include <vector>
#include <cmath>

double double_the_difference(const std::vector<float>& lst) {
    long long result = 0;
    for (float num : lst) {
        if (num > 0 && num == floor(num) && ((int)num) % 2 != 0) {
            result += (long long)pow(num, 2);
        }
    }
    return 2 * result;
}

int main() {
    std::vector<float> lst = {1.0, 2.0, 3.0, 4.0, 5.0};
    double result = double_the_difference(lst);
    std::cout << result << std::endl;
    return 0;
}