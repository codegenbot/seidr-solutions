#include <string>
#include <vector>

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

std::string intersection(std::vector<int> interval1, std::vector<int> interval2) {
    int start = std::max(interval1[0], interval2[0]);
    int end = std::min(interval1[1], interval2[1]);

    if (start > end) return "NO";
    
    int length = end - start + 1;
    bool isPrimeResult = true;

    for (int i = 2; i * i <= length; i++) {
        if (length % i == 0) {
            isPrimeResult = false;
            break;
        }
    }

    return std::to_string(isPrimeResult);
}