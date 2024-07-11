#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

std::string intersection(std::vector<int> interval1, std::vector<int> interval2) {
    int start = std::max(interval1[0], interval2[0]);
    int end = std::min(interval1[1], interval2[1]);
    
    if (start > end) return "NO";
    
    int length = end - start;
    
    return isPrime(length) ? "YES" : "NO";
}