#include <iostream>
#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && modf(num, &num) == 0) {
            sum += num * num;
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {1.2f, 3.4f, 5.6f};
    int result = double_the_difference(lst);
    std::cout << "Result: " << result << std::endl;
    return 0;
}