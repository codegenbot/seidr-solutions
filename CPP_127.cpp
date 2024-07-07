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
    std::string s1, s2;
    std::cin >> s1 >> ' ';
    int interval1_first = std::stoi(s1);
    s2.clear();  // Clearing string to avoid using it multiple times
    std::cin >> s2;
    int interval1_second = std::stoi(s2);

    std::pair<int, int> interval2;
    std::cout << "Enter the second interval: ";
    std::cin >> s1 >> ' ';
    int interval2_first = std::stoi(s1);
    s2.clear();  // Clearing string to avoid using it multiple times
    std::cin >> s2;
    int interval2_second = std::stoi(s2);

    if (intersection({interval1_first, interval1_second}, {interval2_first, interval2_second}) == "YES")
        std::cout << "The intervals intersect.\n";
    else
        std::cout << "The intervals do not intersect.\n";

    return 0;
}