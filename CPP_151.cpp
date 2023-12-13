```
#include <iostream>
#include <cmath>
#include <vector>
#include <cassert>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (int i = 0; i < lst.size(); i++) {
        if ((int)lst[i] % 2 == 1 && lst[i] > 0) {
            sum += std::pow(lst[i], 2);
        }
    }
    return sum;
}

// Test cases
std::vector<float> lst = {1, 2, 3, 4, 5};
long long odd_sum = double_the_difference(lst);

int main() {
    assert(odd_sum == (1 + 9 + 25 + 49 + 81));
}
```