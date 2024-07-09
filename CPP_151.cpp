```c++
#include <vector>
#include <cmath>
#include <cassert>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) { 
            if (fmod(num, 2.0) != 0.0) { 
                sum += pow(num, 2);
            }
        }
    }
    return sum;
}

int main() {
    int n;
    std::cout << "Enter number of elements: ";
    std::cin >> n;

    std::vector<float> lst(n);
    for (float &num : lst) {
        std::cout << "Enter element " << n << ": ";
        std::cin >> num;
    }

    long long odd_sum = double_the_difference(lst); 
    return 0;
}