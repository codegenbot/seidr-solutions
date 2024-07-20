```cpp
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

std::string intersection(std::vector<int> interval1, std::vector<int> interval2) {
    int start = std::max(interval1[0], interval2[0]);
    int end = std::min(interval1[1], interval2[1]);

    if (start > end) return "NO";

    int length = end - start + 1;

    bool isPrime = true;
    for (int i = 2; i * i <= length; i++) {
        if (length % i == 0) {
            isPrime = false;
            break;
        }
    }

    return isPrime ? "YES" : "NO";
}

int main() {
    std::vector<int> interval1, interval2;
    int start1, end1, start2, end2;

    std::cout << "Enter the first interval: ";
    std::cin >> start1 >> end1;
    for (int i = 0; i < 2; ++i) {
        if(i == 0) {
            interval1.push_back(start1);
        } else {
            interval1.push_back(end1);
        }
    }

    std::cout << "Enter the second interval: ";
    std::cin >> start2 >> end2;
    for (int i = 0; i < 2; ++i) {
        if(i == 0) {
            interval2.push_back(start2);
        } else {
            interval2.push_back(end2);
        }
    }

    std::cout << "Intersection: " << intersection(interval1, interval2);

    return 0;
}