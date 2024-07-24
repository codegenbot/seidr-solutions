#include <iostream>
#include <vector>
#include <cmath>

std::string intersection(int start1, int end1, int start2, int end2) {
    int commonStart = std::max(start1, start2);
    int commonEnd = std::min(end1, end2);

    if (commonStart > commonEnd)
        return "NO";

    int length = commonEnd - commonStart + 1;

    bool isPrime = true;
    for (int i = 2; i * i <= length; i++) {
        if (length % i == 0) {
            isPrime = false;
            break;
        }
    }

    return isPrime ? "YES" : "NO";
}