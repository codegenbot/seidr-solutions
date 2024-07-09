#include <vector>
#include <cmath>

long long int double_the_difference(std::vector<float> lst){
    long long int sum = 0;
    for (float num : lst) {
        if (num > 0 && num == (int)num && (int)num % 2 != 0) {
            sum += (long long int)pow(num, 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {1.0, 2.0, 3.0, 4.0, 5.0};
    long long int odd_sum = 0;
    assert(double_the_difference(lst) == odd_sum);
    
    return 0;
}