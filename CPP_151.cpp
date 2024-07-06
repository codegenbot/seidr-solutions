```cpp
#include <vector>
#include <cmath>

long long double_the_difference(std::vector<double> lst) {
    long long sum = 0;
    for (double num : lst) {
        if (num > 0 && int(num + 0.5) == num) { 
            sum += pow(int(num + 0.5), 2); 
        }
    }
    return sum;
}

int main() {
    std::vector<double> lst;
    double num;

    printf("Enter the numbers (negative to stop):\n");
    while (scanf("%lf", &num) == 1) {
        lst.push_back(num);
    }

    long long odd_sum = double_the_difference(lst);

    printf("Sum of squares: %lld\n", odd_sum);

    return 0;
}