```cpp
#include <vector>
#include <cmath>
#include <cassert>

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
    std::vector<double> lst = {1.5, 3.7, 4.8};
    assert(double_the_difference(lst) == 53);
    return 0;
}