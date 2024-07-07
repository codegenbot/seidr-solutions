```cpp
#include <iostream>
#include <string>

std::string intersection(std::pair<int, int> interval1, std::pair<int, int> interval2) {
    int start = std::max(interval1.first, interval2.first);
    int end = std::min(interval1.second, interval2.second);

    return start <= end ? "YES" : "NO";
}

int main() {
    assert(intersection({-2, -2}, {-3, -2}) == "NO");
    std::pair<int, int> interval1;
    std::cout << "Enter the start of the first interval: ";
    int temp;
    std::cin >> temp; 
    std::cin.ignore();
    std::cout << "Enter the end of the first interval: ";
    std::cin >> temp; 
    std::cin.ignore();

    interval1.first = temp;
    interval1.second = temp;

    std::pair<int, int> interval2;
    std::cout << "Enter the start of the second interval: ";
    std::cin >> temp; 
    std::cin.ignore();
    std::cout << "Enter the end of the second interval: ";
    std::cin >> temp; 
    std::cin.ignore();

    interval2.first = temp;
    interval2.second = temp;

    if (intersection(interval1, interval2) == "YES")
        std::cout << "The intervals intersect.\n";
    else
        std::cout << "The intervals do not intersect.\n";

    return 0;
}