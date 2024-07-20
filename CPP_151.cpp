#include <vector>

long long double_the_difference(vector<float> lst){
    long long odd_sum = 0;
    for (float num : lst) {
        if (num > 0 && num == (int)num && (int)num % 2 != 0) {
            odd_sum += (long long)pow(num, 2);
        }
    }
    return 2 * odd_sum;
}

int main() {
    vector<float> lst = {1.0, 2.0, 3.0};
    long long result = double_the_difference(lst);
    return 0;
}