#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && modf(num, &num) == 0) {
            sum += pow(num, 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst;
    float input;
    long long odd_sum = 0;

    std::cout << "Enter the numbers (separated by spaces): ";
    while(std::cin >> input) {
        lst.push_back(input);
    }

    odd_sum = double_the_difference(lst);

    return 0;
}