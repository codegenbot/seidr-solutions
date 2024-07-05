#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num && ((int)num % 2 != 0)) {
            sum += 2 * (long long)num;
        }
    }
    return sum;
}

int main() {
    // Example usage
    vector<float> lst = {1.0, 2.0, 3.0, 4.0, 5.0};    
    long long result = double_the_difference(lst);
    cout << "Result: " << result << endl;
    return 0;
}