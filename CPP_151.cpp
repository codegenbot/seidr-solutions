#include <iostream>
#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && num == (int)num && ((int)num) % 2 != 0) {
            sum += (long long)pow(num, 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {1.5, 2, 3.0, 4.0, 5.5, 6, 7};

    long long result = double_the_difference(lst);
    std::cout << result << std::endl;

    return 0;
}