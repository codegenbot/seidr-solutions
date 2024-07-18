#include <vector>

long long double_the_difference(std::vector<float> lst){
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && num == (int)num && (int)num % 2 != 0) {
            sum += (long long)num * num;
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {2.5, 3, -4, 1.0, 5.5};
    long long odd_sum = double_the_difference(lst);
    
    return 0;
}