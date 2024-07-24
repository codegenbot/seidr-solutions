#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst){
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) { 
            sum += pow(num, 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {1.5f, 3.0f, 4.25f}; // Provide the input list here
    int odd_sum = 29; // Replace with the actual value

    assert(double_the_difference(lst) == odd_sum);

    return 0;
}