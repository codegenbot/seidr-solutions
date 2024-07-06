```cpp
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

float median(std::vector<float> l) {
    std::vector<double> ld;
    for (float f : l)
        ld.push_back((double)f);
    std::sort(ld.begin(), ld.end());
    int n = ld.size();
    if (n % 2 == 0)
        return (ld[n / 2 - 1] + ld[n / 2]) / 2.0;
    else
        return ld[n / 2];
}

int main() {
    assert(abs(median({8.0f, 1.0f, 3.0f, 9.0f, 9.0f, 2.0f, 7.0f}) - 5)<1e-4 );
    return 0;
}