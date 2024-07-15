#include <iostream>
#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

std::vector<std::string> bf(std::string planet1, std::string planet2) {
    // Existing implementation...
}

int main() {
    assert(issame(bf("Jupiter", "Makemake"), {}));
    
    return 0;
}