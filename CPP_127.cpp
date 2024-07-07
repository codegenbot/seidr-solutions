```cpp
#include <iostream>
#include <string>

std::string intersection(std::pair<int, int> interval1, std::pair<int, int> interval2) {
    int start = std::max(interval1.first, interval2.first);
    int end = std::min(interval1.second, interval2.second);

    if (start <= end)
        return std::to_string(start <= end) + "yes";
    else
        return "no";
}

int main() {
    assert(intersection({-2, -2}, {-3, -2}) == "falseyes");

    
    std::pair<int, int> interval1;
    std::cout << "Enter the first interval's start: ";
    int temp;
    std::cin >> temp; 
    interval1.first = temp;

    std::cout << "Enter the first interval's end: ";
    std::cin >> temp; 
    interval1.second = temp;

    std::pair<int, int> interval2;
    std::cout << "Enter the second interval's start: ";
    std::cin >> temp; 
    interval2.first = temp;

    std::cout << "Enter the second interval's end: ";
    std::cin >> temp; 
    interval2.second = temp;

    if (intersection(interval1, interval2) == "no")
        std::cout << "The intervals do not intersect.\n";
    else
        std::cout << "The intervals intersect.\n";

    return 0;
}