```cpp
#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num >= 0 && int(num) == num) { 
            if (int(num) % 2 != 0) { 
                sum += pow(int(num), 2);
            }
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {1.5, 3.0, -1.0, 4.5};
    long long result = double_the_difference(lst);
    std::cout << "The result is: " << result << std::endl;
    return 0;
}