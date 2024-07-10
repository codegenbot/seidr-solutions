#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

long long double_the_difference(vector<float> lst){
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && fmod(num, 1) == 0 && ((int)num) % 2 != 0) {
            sum += (long long)pow(num, 2);
        }
    }
    return sum;
}

int main() {
    vector<float> lst = {1.5, 3.0, 5.0}; // Define the vector lst
    long long odd_sum = double_the_difference(lst);

    assert(odd_sum == 34); // Assuming odd_sum value for testing

    return 0;
}