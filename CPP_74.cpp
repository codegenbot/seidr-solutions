#include <iostream>
#include <vector>
#include <string>

bool isVectorSame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return (a == b);
}

int main() {
    int sum1 = 0;
    std::vector<std::string> lst1;
    std::cout << "Enter strings for list 1: ";
    for (std::string str; std::cin >> str && str != "END";) {
        lst1.push_back(str);
    }
    
    int sum2 = 0;
    std::vector<std::string> lst2;
    std::cout << "Enter strings for list 2: ";
    for (std::string str; std::cin >> str && str != "END";) {
        lst2.push_back(str);
    }
    
    bool total_match = true;
    if (sum1 < sum2) return 0;
    else if (sum1 > sum2) total_match = false;
    bool result = isVectorSame(lst1, lst2);
    assert(result == total_match);

    return 0;
}