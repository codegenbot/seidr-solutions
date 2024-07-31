#include <vector>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && (int)num == num && (int)num % 2 != 0) {
            sum += (long long)pow(num, 2);
        }
    }
    return sum;
}

#include <iostream>
int main() {
    std::vector<float> lst = {5.0, 3.0, 1.0, -2.0, 4.0};
    std::cout << double_the_difference(lst);
    return 0;
}