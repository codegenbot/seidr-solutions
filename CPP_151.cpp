```
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (int i = 0; i < lst.size(); i++) {
        if ((int)lst[i] % 2 == 1) {
            sum += std::pow(lst[i], 2);
        }
    }
    return sum;
}
```