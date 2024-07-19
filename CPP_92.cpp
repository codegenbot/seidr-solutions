#include <iostream>
#include <sstream>

int main() {
    int a, b, c;
    std::cout << "Enter three numbers: ";
    std::cin >> a >> b >> c;

    std::string s1 = std::to_string(a);
    std::string s2 = std::to_string(b);
    std::string s3 = std::to_string(c);

    if (!(std::cin >> s1) || !(std::cin >> s2) || !(std::cin >> s3)) {
        std::cout << "Error: Please enter valid integer values.\n";
    } else {
        std::cout << "The numbers are integers: " << a << ", " << b << ", " << c << "\n";
    }

    return 0;
}