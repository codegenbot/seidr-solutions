#include <string>
#include <algorithm>
#include <utility>

bool is_prime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

std::string intersection(std::pair<int, int> interval1, std::pair<int, int> interval2) {
    int start1 = interval1.first;
    int end1 = interval1.second;
    int start2 = interval2.first;
    int end2 = interval2.second;

    int intersection_start = std::max(start1, start2);
    int intersection_end = std::min(end1, end2);

    if (intersection_start > intersection_end) {
        return "NO";
    }

    int intersection_length = intersection_end - intersection_start;

    if (is_prime(intersection_length)) {
        return "YES";
    } else {
        return "NO";
    }
}