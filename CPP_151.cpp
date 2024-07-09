#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst){
    long long odd_sum = 0;
    for (float num : lst) {
        if (num > 0 && num == (int)num && (int)num % 2 != 0) {
            odd_sum += (long long)(num*num);
        }
    }
    return 2 * odd_sum;
}

int main(){
    std::vector<float> lst = {1.0f, 2.0f, 3.0f, 4.0f};
    long long odd_sum = 20;
    assert(double_the_difference(lst) == odd_sum);
    
    return 0;
}