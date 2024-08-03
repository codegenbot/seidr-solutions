#include <iostream>
#include <algorithm>

bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

struct Interval {
    int start;
    int end;
};

std::string findPrimeIntersection(const Interval& interval1, const Interval& interval2) {
    int intersection_start = std::max(interval1.start, interval2.start);
    int intersection_end = std::min(interval1.end, interval2.end);
    
    if (intersection_start > intersection_end) {
        return "NO";
    }
    
    int intersection_length = intersection_end - intersection_start + 1;
    
    if (is_prime(intersection_length)) {
        return "YES";
    } else {
        return "NO";
    }
}

int main() {
    assert(findPrimeIntersection({-2, -2}, {-3, -2}) == "NO");
    
    // Add more test cases here
    
    return 0;
}