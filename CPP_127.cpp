#include <iostream>
#include <vector>
#include <string>
#include <cmath>

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
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