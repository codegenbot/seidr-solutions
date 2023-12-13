```
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

long long double_the_difference(const std::vector<float>& lst) {
    long long sum = 0;
    for (auto i : lst) {
        if (i % 2 == 1 && i > 0) {
            sum += i * i;
        }
    }
    return sum;
}

// Test cases
std::vector<float> lst = {1, 2, 3, 4, 5};
long long odd_sum = double_the_difference(lst);
assert(odd_sum == "1 + 9 + 25 + 49 + 81");
```