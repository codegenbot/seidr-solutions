```cpp
#include <algorithm>
#include <cmath>

int main() {
    int n;
    std::cin >> n;

    int maxVal = *std::max_element({n});
    
    std::cout << abs(maxVal) << std::endl;
}