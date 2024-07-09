```cpp
#include <iostream>
#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b, std::vector<std::string> c) {
    if (a.size() != b.size() || a.size() != c.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i] && a[i] != c[i]) return false;
    }
    return true;
}

std::vector<std::string> total_match(std::vector<std::string> lst1, std::vector<std::string> lst2) {
    int sum1 = 0;
    for (const auto& s : lst1) {
        sum1 += std::stol(s); 
    }
    int sum2 = 0;
    for (const auto& s : lst2) {
        sum2 += std::stol(s); 
    }
    if (sum1 < sum2) return lst1;
    else if (sum1 > sum2) return lst2;
    else return lst1;
}

int main() {
    std::vector<std::string> lst1 = {"this"};
    std::vector<std::string> lst2 = {};
    if (!issame(lst1, lst1, total_match(lst1, lst2))) {
        std::cout << "Test failed" << std::endl;
    } else {
        std::cout << "Test passed" << std::endl;
    }
    return 0;
}