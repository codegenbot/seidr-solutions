#include <vector>
long long double_the_difference(vector<float> lst);
int main() {
    vector<float> lst = {1.5f, -2.0f, 3.25f, 4.0f};
    int odd_sum = 0;
    for (float num : lst) {
        if (num > 0 && modf(num, &num) == 0) {
            sum += pow(num, 2);
        }
    }
    assert (double_the_difference(lst) == odd_sum );
}