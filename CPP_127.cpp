#include <stdio.h>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

string intersection(vector<int> interval1, vector<int> interval2) {
    int start = max(interval1[0], interval2[0]);
    int end = min(interval1[1], interval2[1]);

    if (start > end) {
        return "NO";
    }

    int length = end - start + 1;

    if (isPrime(length)) {
        return "YES";
    } else {
        return "NO";
    }
}