#include <vector>
#include <iostream>
#include <cmath>

using namespace std;

long long doubleTheDifference(vector<float> lst) {
    long long pos_sum = 0, neg_sum = 0;
    for (float n : lst) {
        if (n > 0 && modf(n, &n) == 0) {
            pos_sum += pow(n, 2);
        } else if (n < 0 && modf(-n, &n) == 0) {
            neg_sum -= pow(-n, 2);
        }
    }
    return abs(pos_sum - neg_sum);
}

long long doubleTheDifference(vector<float> lst) {
    long long pos_sum = 0, neg_sum = 0;
    for (float n : lst) {
        if (n > 0 && modf(n, &n) == 0) {
            pos_sum += pow(n, 2);
        } else if (n < 0 && modf(-n, &n) == 0) {
            neg_sum -= pow(-n, 2);
        }
    }
    return abs(pos_sum - neg_sum);
}