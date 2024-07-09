#include <iostream>
#include <vector>
#include <cmath>

int main() {
    std::vector<float> lst;
    float num;

    while (std::cin >> num) {
        if (num > 0 && modf(num, &num) == 0) {
            lst.push_back(num);
        }
    }

    long long result = double_the_difference(lst);

    std::cout << "The difference of squares is: " << result << std::endl;
    return 0;
}

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && modf(num, &num) == 0) {
            sum += pow(num, 2);
        }
    }
    return sum;
}