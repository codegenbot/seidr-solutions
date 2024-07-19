#include <vector>

long long double_the_difference(const vector<float>& lst){
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && num == (int)num && (int)num % 2 != 0) {
            sum += (long long)num * num;
        }
    }
    return sum;
}

int main() {
    vector<float> lst = {1.0, 2.5, 3.0, 4.0};
    long long odd_sum = 123;
    assert(double_the_difference(lst) == odd_sum);
    return 0;
}