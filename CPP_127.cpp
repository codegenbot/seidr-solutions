#include <iostream>
#include <vector>
#include <cassert>

bool is_prime(int number) {
    if (number <= 1) {
        return false;
    }
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
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

int main() {
    assert(intersection({-2, -2}, {-3, -2}) == "NO");
    return 0;
}