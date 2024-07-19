#include <vector>
long long double_the_difference(vector<float> lst);
int main() {
    vector<float> lst = {1.0f, 2.5f, 3.0f, 4.0f, 5.0f};
    long long odd_sum = 0;
    for (float num : lst) {
        if (num > 0 && modf(num, &num) == 0) {
            odd_sum += pow(num, 2);
        }
    }
    assert(double_the_difference(lst) == odd_sum );
}