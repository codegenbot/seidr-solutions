#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

long long doubleTheDifference(vector<float> lst) {
    long long pos_sum = 0, neg_sum = 0;
    for (float n : lst) {
        if (n > 0) {
            pos_sum += pow(n, 2);
        } else if (n < 0) {
            neg_sum -= pow(-n, 2);
        }
    }
    return abs(pos_sum - neg_sum);
}

int main() {
    vector<float> numbers = {1, 2, -3, 4, -5};
    long long result = doubleTheDifference(numbers);
    cout << "Double the difference: " << to_string(result) << endl;
    return 0;
}