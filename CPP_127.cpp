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
    std::cout << "Enter the first interval's start: ";
    int temp;
    std::cin >> temp; 
    std::string str1 = std::to_string(temp);
    interval1.first = atoi(str1.c_str());

    std::cout << "Enter the first interval's end: ";
    std::cin >> temp; 
    str1 = std::to_string(temp);
    interval1.second = atoi(str1.c_str());

    std::pair<int, int> interval2;
    std::cout << "Enter the second interval's start: ";
    std::cin >> temp; 
    str1 = std::to_string(temp);
    interval2.first = atoi(str1.c_str());

    std::cout << "Enter the second interval's end: ";
    std::cin >> temp; 
    str1 = std::to_string(temp);
    interval2.second = atoi(str1.c_str());

    if (std::string(intersection(interval1, interval2)) == "YES")
        std::cout << "The intervals intersect.\n";
    else
        std::cout << "The intervals do not intersect.\n";

    return 0;
}