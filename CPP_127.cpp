```cpp
#include <iostream>
#include <string>

std::string intersection(std::pair<int, int> interval1, std::pair<int, int> interval2) {
    int start = std::max(interval1.first, interval2.first);
    int end = std::min(interval1.second, interval2.second);

    if (start <= end)
        return "YES";
    else
        return "NO";
}

int main() {
    assert(intersection({-2, -2}, {-3, -2}) == "NO");
    std::pair<int, int> interval1;
    std::cout << "Enter the first interval: ";
    std::cin >> interval1.first >> ' ';
    std::cin >> interval1.second;

    std::pair<int, int> interval2;
    std::cout << "Enter the second interval: ";
    std::cin >> interval2.first >> ' ';
    std::cin >> interval2.second;

    if (intersection(interval1, interval2) == "YES")
        std::cout << "The intervals intersect.\n";
    else
        std::cout << "The intervals do not intersect.\n";

    return 0;
}