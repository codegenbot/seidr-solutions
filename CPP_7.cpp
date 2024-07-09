#include <iostream>
#include <vector>
#include <string>

bool issame(const std::vector<std::string>& strings) {
    if (strings.size() == 1)
        return true;
    for (const auto& str : strings) {
        bool found = false;
        for (const auto& s2 : strings) {
            if (s2 != str && s2.find(str) != std::string::npos) {
                found = true;
                break;
            }
        }
        if (!found)
            return false;
    }
    return true;
}

int main() {
    int n, m;
    std::cout << "Enter the number of strings: ";
    std::cin >> n;
    std::vector<std::string> strvec(n);
    
    for (auto &str : strvec) {
        std::cout << "Enter string " << strvec.begin() - strvec.end() + 1 << ":";
        std::cin.ignore();
        std::getline(std::cin, str);
    }
    
    int k;
    std::cout << "Enter the number of substrings: ";
    std::cin >> k;
    std::vector<std::string> subvec(k);
    
    for (auto &sub : subvec) {
        std::cout << "Enter substring " << subvec.begin() - subvec.end() + 1 << ":";
        std::cin.ignore();
        std::getline(std::cin, sub);
    }
    
    if (issame(strvec)) {
        std::vector<std::string> filtered = filter_by_substring(strvec, subvec[0]);
        for (const auto& str : filtered) {
            std::cout << "String: " << str << std::endl;
        }
    } else {
        std::cout << "Strings are not same." << std::endl;
    }

    return 0;
}