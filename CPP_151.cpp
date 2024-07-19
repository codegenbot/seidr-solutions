```cpp
#include <vector>
#include <iostream>
#include <cmath>

using namespace std;

long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && modf(num, &num) == 0) {
            sum += pow(num, 2);
        }
    }
    return sum;
}

int main() {
    vector<float> lst;
    float num;
    long long odd_sum = 0;
    cout << "Enter numbers (enter 'stop' to finish): ";
    while (true) {
        cin >> num;
        if (num == 'stop') break;
        lst.push_back(num);
    }
    long long sum = double_the_difference(lst);
    cout << "Sum of squares: " << sum << endl;
}