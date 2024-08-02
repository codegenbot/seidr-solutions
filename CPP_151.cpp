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
    cout << "Enter numbers separated by spaces: ";
    while (cin >> num) {
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
    cout << "Double the difference: " << double_the_difference(lst) << endl;
    cout << "Odd sum: " << odd_sum << endl;
    return 0;
}