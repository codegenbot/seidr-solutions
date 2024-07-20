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
    // test the function
    std::vector<int> interval1 = {1, 5};
    std::vector<int> interval2 = {3, 8};
    int result = intersection(interval1, interval2);
    std::cout << "Result: " << result << std::endl;
    return 0;
}