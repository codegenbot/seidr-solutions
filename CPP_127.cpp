#include <iostream>
#include <string>
#include <algorithm>

std::string intersection(int interval1[], int interval2[]) {
    int start1 = interval1[0];
    int end1 = interval1[1];
    int start2 = interval2[0];
    int end2 = interval2[1];

    int start = std::max(start1, start2);
    int end = std::min(end1, end2);

    if (start > end) {
        return "NO";
    }

    int length = end - start + 1;

    if (length <= 1) {
        return "NO";
    }

    for (int i = 2; i <= length / 2; i++) {
        if (length % i == 0) {
            return "NO";
        }
    }

    return "YES";
}

int main() {
    int interval1[] = {3, 9};
    int interval2[] = {5, 12};

    std::cout << intersection(interval1, interval2);

    return 0;
}