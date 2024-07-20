#include <vector>
#include <cmath>
#include <algorithm>

int main() {
    std::vector<float> lst = {1.0f, 2.0f, 3.5f, 4.0f, 6.25f};
    long long result = double_the_difference(lst);
    return 0;
}

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) { 
            if (modf(sqrt(num), &num) != 0.0) { 
                sum += pow(num, 2);
            }
        }
    }
    return sum;
}