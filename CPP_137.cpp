#include <iostream>
#include <vector>

int main() {
    std::any a, b;
    if (std::cin >> a >> b) {
        if (compare(a, b))
            std::cout << "true\n";
        else
            std::cout << "false\n";
    } else {
        std::cerr << "Invalid input.\n";
        return 1; // exit with error code
    }
    return 0;
}