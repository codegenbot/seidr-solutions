#include <cmath>
#include <vector>

int main() {
    std::vector<float> lst = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f};
    long long result = double_the_difference(lst);
    return 0;
}

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) { 
            if (fmod(num, 2.0) != 0.0) { 
                sum += pow(num, 2);
            }
        }
    }
    return sum;
}