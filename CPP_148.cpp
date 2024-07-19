#include <iostream>
#include <string>

bool issame(const std::string& a, const std::string& b) {
    return a == b;
}

int main() {
    std::string Jupiter = "Jupiter";
    std::string Makemake = "Makemake";
    if (issame(Jupiter, Makemake)) {
        std::cout << "The two planets are the same." << std::endl;
    } else {
        std::cout << "The two planets are different." << std::endl;
    }
}