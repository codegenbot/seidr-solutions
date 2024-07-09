#include <iostream>
#include <vector>

int intersection(std::pair<int, int> interval1, std::pair<int, int> interval2) {
    int start = std::max(interval1.first, interval2.first);
    int end = std::min(interval1.second, interval2.second);

    if (start > end) return 0;

    int length = end - start + 1;

    bool isPrime = true;
    for (int i = 2; i * i <= length; i++) {
        if (length % i == 0) {
            isPrime = false;
            break;
        }
    }

    return isPrime ? 1 : 0;
}