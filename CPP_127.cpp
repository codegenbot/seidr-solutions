#include <cmath>

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

string intersection(vector<int> interval1, vector<int> interval2) {
    int start1 = interval1[0], end1 = interval1[1];
    int start2 = interval2[0], end2 = interval2[1];
    
    int intersectStart = max(start1, start2);
    int intersectEnd = min(end1, end2);
    
    if (intersectStart > intersectEnd) return "NO";
    
    int length = intersectEnd - intersectStart + 1;
    
    return isPrime(length) ? "YES" : "NO";
}