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
    std::cout << "Enter the first interval: ";
    std::string temp;
    std::cin >> temp; 
    interval1.first = std::stoi(temp);
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 

    std::cout << "Enter the end of the first interval: ";
    std::cin >> temp;
    std::string str;
    str = temp; // Convert the integer input into a string
    interval1.second = std::stoi(str);
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 

    std::pair<int, int> interval2;
    std::cout << "Enter the second interval: ";
    std::cin >> temp;
    str = temp; // Convert the integer input into a string
    interval2.first = std::stoi(str); 
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << "Enter the end of the second interval: ";
    std::cin >> temp;
    str = temp; // Convert the integer input into a string
    interval2.second = std::stoi(str);
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    if (intersection(interval1, interval2) == "YES")
        std::cout << "The intervals intersect.\n";
    else
        std::cout << "The intervals do not intersect.\n";

    return 0;
}