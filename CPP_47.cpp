```cpp
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

int main() {
    std::vector<float> l = {8, 1, 3, 9, 9, 2, 7};
    float result = median(l);
    std::cout << "The median is: " << result << std::endl;
    
    return 0;
}

float median(std::vector<float> l) {
    std::sort(l.begin(), l.end());
    int n = l.size();
    if (n % 2 == 0)
        return (l[n / 2 - 1] + l[n / 2]) / 2.0;
    else
        return l[n / 2];
}