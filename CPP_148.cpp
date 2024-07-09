#include <vector>
#include <string>

int main() {
    std::string a;
    std::cout << "Enter the first string: ";
    std::cin >> a;
    std::string b;
    std::cout << "Enter the second string: ";
    std::cin >> b;
    std::vector<std::string> result = bf(a, b);
    bool same = issame(result);
    if (same) {
        std::cout << "The strings are the same." << std::endl;
    } else {
        std::cout << "The strings are not the same." << std::endl;
    }
}

std::vector<std::string> bf(std::string a, std::string b) {
    if (a.length() > b.length()) {
        for (size_t i = 0; i <= b.length(); ++i) {
            b.insert(0, a);
        }
    } else if (b.length() > a.length()) {
        for (size_t i = 0; i <= a.length(); ++i) {
            a.insert(0, b);
        }
    }
    return {a, b};
}

bool issame(const std::vector<std::string>& vec) { 
    if (vec.size() < 2) return true;
    for (size_t i = 1; i < vec.size(); ++i) {
        if (vec[i] != vec[0]) return false;
    }
    return true;
}