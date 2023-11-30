#include <iostream>
#include <vector>
#include <string>
#include <cmath>

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

std::string intersection(std::vector<int> interval1, std::vector<int> interval2) {
    int start1 = interval1[0];
    int end1 = interval1[1];
    int start2 = interval2[0];
    int end2 = interval2[1];

    int intersectionStart = std::max(start1, start2);
    int intersectionEnd = std::min(end1, end2);
    int intersectionLength = intersectionEnd - intersectionStart + 1;

    if (intersectionLength <= 0) {
        return "NO";
    }

    if (isPrime(intersectionLength)) {
        return "YES";
    } else {
        return "NO";
    }
}

int main() {
    std::vector<int> interval1 = {1, 2};
    std::vector<int> interval2 = {2, 3};
    std::cout << intersection(interval1, interval2) << std::endl;

    interval1 = {-1, 1};
    interval2 = {0, 4};
    std::cout << intersection(interval1, interval2) << std::endl;

    interval1 = {-3, -1};
    interval2 = {-5, 5};
    std::cout << intersection(interval1, interval2) << std::endl;

    return 0;
}