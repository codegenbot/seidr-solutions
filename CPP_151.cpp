#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

long long int double_the_difference(vector<float> lst) {
    long long int sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num && (int)num % 2 != 0) {
            sum += 2 * (int)num; // Assuming 'double the difference' means twice the value
        }
    }
    return sum;
}

int main() {
    vector<float> lst = {1.0, 3.0, 2.0, -3.0, 5.0};
    cout << double_the_difference(lst) << endl;  // Expected sum of double the odd numbers: 2*(1+3+5)
    return 0;
}