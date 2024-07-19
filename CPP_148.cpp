#include <string>
#include <cctype>

bool issame(const std::string& a, const std::string& b) {
    return a == b;
}

int main() {
    if (issame("Jupiter", "Makemake")) {
        std::cout << "The two planets are the same." << std::endl;
    } else {
        std::cout << "The two planets are different." << std::endl;
    }
}