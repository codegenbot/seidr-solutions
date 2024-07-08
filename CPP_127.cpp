#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

std::string intersection(const std::vector<int>& interval1, const std::vector<int>& interval2) {
    int start = std::max(interval1[0], interval2[0]);
    int end = std::min(interval1[1], interval2[1]);

    if (start > end)
        return "NO";

    int length = end - start + 1;

    bool isPrime = true;
    for (int i = 2; i * i <= length; i++) {
        if (length % i == 0) {
            isPrime = false;
            break;
        }
    }

    return std::to_string(isPrime);
}

int main() {
    std::vector<int> interval1 = {3,6};
    std::vector<int> interval2 = {5,8};

    std::cout << intersection(interval1, interval2) << std::endl;

    return 0;
}