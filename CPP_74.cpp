```cpp
#include <iostream>
#include <vector>
#include <string>

bool isVectorSame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
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
    std::string str;
    while(std::cin >> str) {
        lst1.push_back(str);
        if(str.back() == ',') break; // If comma is entered then it will stop reading
    }
    
    int sum2 = 0;
    std::vector<std::string> lst2;
    std::cout << "Enter strings for list 2: ";
    while(std::cin >> str) {
        lst2.push_back(str);
        if(str.back() == ',') break; // If comma is entered then it will stop reading
    }
    
    bool total_match = isVectorSame(lst1, lst2);

    return 0;
}