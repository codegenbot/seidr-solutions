#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

using namespace std;

int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

string intersection(vector<int> interval1, vector<int> interval2) {
    int start1 = interval1[0];
    int end1 = interval1[1];
    int start2 = interval2[0];
    int end2 = interval2[1];

    int start = max(start1, start2);
    int end = min(end1, end2);

    if (start > end) {
        return "NO";
    }

    int length = end - start;

    if (isPrime(length)) {
        return "YES";
    } else {
        return "NO"; 
    }
}