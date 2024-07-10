```cpp
#include <vector>
#include <cmath>

long long double_the_difference(std::vector<double> lst) {
    long long sum = 0;
    for (double num : lst) {
        if (num > 0 && std::floor(num) == num) { 
            if (std::fmod(num, 2.0) != 0.0) { 
                sum += std::pow(num, 2);
            }
        }
    }
    return sum;
}

int main() {
    std::vector<double> lst;
    int num;
    std::cout << "Enter numbers (enter -1 when finished): ";
    while ((std::cin >> num) && (num != -1)) {
        lst.push_back((double)num);
    }
    long long odd_sum = double_the_difference(lst);
    return 0;
}