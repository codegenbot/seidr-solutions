#include <string>
#include <cctype>

bool issame(const std::string& a, const std::string& b) {
    return a == b;
}

int main() {
    std::string a, b;
    std::cout << "Enter the first planet name: ";
    std::cin >> a;
    std::cout << "Enter the second planet name: ";
    std::cin >> b;

    if (issame(a, b)) {
        std::cout << "The two planets are the same." << std::endl;
    } else {
        std::cout << "The two planets are different." << std::endl;
    }
}