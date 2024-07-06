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
    long long odd_sum;

    double input;
    while (std::cin >> input) {
        lst.push_back(input);
    }

    odd_sum = double_the_difference(lst);
    
    return 0;
}