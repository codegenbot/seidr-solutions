```cpp
#include <iostream>
#include <vector>
#include <string>

bool same(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return (a == b);
}

int main() {
    int sum1 = 0;
    std::vector<std::string> lst1;
    std::cout << "Enter strings for list 1: ";
    for (std::string str = ""; std::cin >> str;) {
        lst1.push_back(str);
    }
    
    int sum2 = 0;
    std::vector<std::string> lst2;
    std::cout << "Enter strings for list 2: ";
    for (std::string str = ""; std::cin >> str;) {
        lst2.push_back(str);
    }
    
    bool result = same(lst1, lst2);
    
    if (std::accumulate(lst1.begin(), lst1.end(), 0,
                         [](int sum, const auto& str) { return sum + str.length(); })
        <
        std::accumulate(lst2.begin(), lst2.end(), 0,
                         [](int sum, const auto& str) { return sum + str.length(); }))
        result = true;
    else if (std::accumulate(lst1.begin(), lst1.end(), 0,
                             [](int sum, const auto& str) { return sum + str.length(); })
             >
             std::accumulate(lst2.begin(), lst2.end(), 0,
                             [](int sum, const auto& str) { return sum + str.length(); }))
        result = false;
    else
        result = true;

    return !result;
}