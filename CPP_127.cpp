#include <iostream>
#include <vector>
#include <string>
#include <cmath>

std::string intersection(std::vector<int> interval1, std::vector<int> interval2);

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i <= std::sqrt(num); i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

std::string intersection(std::vector<int> interval1, std::vector<int> interval2) {
    int start = std::max(interval1[0], interval2[0]);
    int end = std::min(interval1[1], interval2[1]);
    
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

int main() {
    assert(intersection({-2, -2}, {-3, -2}) == "NO");
    
    return 0;
}