#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

using namespace std;

long long int double_the_difference(const vector<float>& lst) {
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
    long long int odd_sum = 2 * (1 + 3 + 5); // Calculate expected sum

    assert (double_the_difference(lst) == odd_sum); // Validation using assert

    cout << double_the_difference(lst) << endl;    
    return 0;
}