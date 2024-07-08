```
#include <vector>
#include <string>
#include <iostream>

bool compareVectors(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

int main() {
    std::vector<std::string> v1, v2;
    int n;

    std::cout << "Enter number of strings: ";
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::string str;
        std::cout << "Enter string " << i + 1 << ": ";
        std::cin >> str;
        v1.push_back(str);
    }

    for (int i = 0; i < n; i++) {
        std::string str;
        std::cout << "Enter string " << i + 1 << ": ";
        std::cin >> str;
        v2.push_back(str);
    }

    if (compareVectors(v1, v2))
        std::cout << "Both vectors have same strings.";
    else
        std::cout << "Vectors do not have the same strings.";

    return 0;
}