#include <iostream>
#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (!is_same(a[i][0], b[i][0])) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    std::cout << "Enter the number of strings: ";
    std::cin >> n;

    std::vector<std::string> v1, v2;
    
    for (int i = 0; i < n; i++) {
        std::string s;
        std::cin >> s;
        v1.push_back(s);
        std::cin >> s;
        v2.push_back(s);
    }

    if (issame(v1, v2)) {
        std::cout << "The two vectors have the same first character in each string." << std::endl;
    } else {
        std::cout << "The two vectors do not have the same first character in each string." << std::endl;
    }

    return 0;
}