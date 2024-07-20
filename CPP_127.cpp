#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int intersection(std::vector<int> interval1, std::vector<int> interval2) {
    int start = std::max(interval1[0], interval2[0]);
    int end = std::min(interval1[1], interval2[1]);

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

int main() {
    std::vector<int> interval1 = {1,3};
    std::vector<int> interval2 = {2,4};

    int result = intersection(interval1, interval2);

    if (result) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}