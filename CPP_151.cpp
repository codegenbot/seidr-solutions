#include <vector>
#include <cmath>

long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && modf(num, &num) == 0.0) {
            sum += num * num;
        }
    }
    return sum;
}

int main() {
    vector<float> lst;
    // Read input from user
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        float x;
        cin >> x;
        lst.push_back(x);
    }
    long long odd_sum = 0;
    for (float num : lst) {
        if (num > 0 && modf(num, &num) == 0.0) {
            odd_sum += num * num;
        } else if (modf(num, &num) != 0.0) {
            odd_sum -= num;
        }
    }
    assert(double_the_difference(lst) == odd_sum);
    return 0;
}