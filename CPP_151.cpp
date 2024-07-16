#include <iostream>
#include <vector>
#include <cmath>

double double_the_difference(std::vector<float> lst) {
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
    std::cout << double_the_difference(lst) << std::endl;
    return 0;
}