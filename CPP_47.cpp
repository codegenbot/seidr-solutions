```cpp
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

float median(std::vector<float> l) {
    std::sort(l.begin(), l.end());
    int n = l.size();
    if (n % 2 == 0)
        return (l[n / 2 - 1] + l[n / 2]) / 2.0;
    else
        return l[n / 2];
}

int main() {
    std::vector<float> l ={8.0f, 1.0f, 3.0f, 9.0f, 9.0f, 2.0f, 7.0f};
    assert(abs(median(l) - 5)<1e-4 );
    return 0;
}