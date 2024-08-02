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
    float num;
    cout << "Enter numbers (enter -1 to stop):" << endl;
    while ((cin >> num) && (num != -1)) {
        lst.push_back(num);
    }
    long long odd_sum = 0; 
    for (float num : lst) {
        if (num > 0 && modf(num, &num) == 0.0) {
            odd_sum += num * num;
        } else {
            odd_sum -= num * num;
        }
    }
    assert(double_the_difference(lst) == odd_sum);
    return 0;
}