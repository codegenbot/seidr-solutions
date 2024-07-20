#include <iostream>
#include <algorithm>
#include <string>
#include <cassert>

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

std::string solve(const std::pair<int, int>& interval1, const std::pair<int, int>& interval2) {
    int start1 = interval1.first;
    int end1 = interval1.second;
    int start2 = interval2.first;
    int end2 = interval2.second;

    int intersectionStart = std::max(start1, start2);
    int intersectionEnd = std::min(end1, end2);

    if (intersectionStart > intersectionEnd) {
        return "NO";
    }

    int intersectionLength = intersectionEnd - intersectionStart;

    if (isPrime(intersectionLength)) {
        return "YES";
    } else {
        return "NO";
    }
}

int main() {
    assert (solve({-2, -2}, {-3, -2}) == "NO");

    return 0;
}