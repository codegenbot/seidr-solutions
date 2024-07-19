#include <string>
#include <cctype>
#include <vector>

bool issame(const std::pmr::string& a, const std::pmr::string& b) {
    return a == b;
}

int main() {
    std::pmr::string planet1, planet2;
    std::cout << "Enter the two planets (separated by space): ";
    std::cin >> planet1 >> planet2;

    if (planet1 == planet2) {
        std::cout << "The two planets are the same." << std::endl;
    } else {
        std::cout << "The two planets are different." << std::endl;
    }
}