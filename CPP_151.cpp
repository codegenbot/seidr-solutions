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
    long long odd_sum = 0; 

    // Read input from user
    cout << "Enter numbers (enter -1 to stop):" << endl;
    while ((cin >> num) && (num != -1)) {
        lst.push_back(num);
    }

    for (float n : lst) {
        if (n > 0 && modf(n, &n) == 0.0) {
            odd_sum += n * n;
        }
    }

    cout << "Double the difference is: " << double_the_difference(lst) - 2*odd_sum << endl;

    return 0;
}