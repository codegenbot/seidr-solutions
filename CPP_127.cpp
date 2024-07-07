```cpp
#include <iostream>
#include <string>
#include <sstream>

std::string intersection(std::pair<int, int> interval1, std::pair<int, int> interval2) {
    if (interval1.first > interval2.second || interval2.first > interval1.second)
        return std::string("no");
    else
    {
        std::ostringstream oss;
        oss << interval1.first << " " << std::min({interval1.second, interval2.second});
        return oss.str();
    }
}

int main() {
    assert(intersection({-2, -2}, {-3, -2}) == std::string("no");
    
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

    if (intersection(interval1, interval2) == std::string("no"))
        std::cout << "The intervals do not intersect.\n";
    else
        std::cout << "The intervals intersect.\n";

    return 0;
}