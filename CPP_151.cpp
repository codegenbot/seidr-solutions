#include <vector>
#include <cmath>

long long double_the_difference(vector<float>& lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && num != (int)num && (int)num % 2 == 1) {
            sum += pow(num, 2);
        }
    }
    return sum;
}

int main() {
    vector<float> lst = {1.0, 2.0, 3.0, 4.0, 5.0};
    assert(double_the_difference(lst) == 11);

    return 0;
}