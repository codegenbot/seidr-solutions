#include <bits/stdc++.h>
using namespace std;

long long doubleTheDifference(vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && modf(num, &num) == 0) {
            sum += pow(num, 2);
        }
    }
    return sum;
}

int main() {
    vector<float> lst; // Declare lst variable
    // Call your function and compare with odd_sum
}