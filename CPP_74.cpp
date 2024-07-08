#include <iostream>
#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    int sum1 = 0;
    std::vector<std::string> lst1;
    std::cout << "Enter strings for list 1: ";
    for (std::string str; getline(std::cin, str)) {
        lst1.push_back(str);
    }
    
    int sum2 = 0;
    std::vector<std::string> lst2;
    std::cout << "Enter strings for list 2: ";
    for (std::string str; getline(std::cin, str)) {
        lst2.push_back(str);
    }
    
    bool total_match;
    total_match = issame(lst1, lst2);

    if (total_match)
        std::cout << "Lists are the same.\n";
    else
        std::cout << "Lists are not the same.\n";

    return 0;
}