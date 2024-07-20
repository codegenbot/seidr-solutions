```cpp
#include <iostream>
#include <vector>
#include <string>

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

    return std::to_string(isPrime);
}

int main() {
    int n1, m1, n2, m2;
    std::cout << "Enter the start and end of interval1: ";
    std::cin >> n1 >> m1;
    std::vector<int> interval1 = {n1, m1};
    
    std::cout << "Enter the start and end of interval2: ";
    std::cin >> n2 >> m2;
    std::vector<int> interval2 = {n2, m2};

    std::string result = intersection(interval1, interval2);
    std::cout << "The intersection is: " << result << std::endl;

    return 0;
}