#include <iostream>
#include <vector>
#include <any>

bool compare(const std::any &a, const std::any &b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return std::get<int>(a) <= std::get<int>(b);
    }
    // Add more comparisons for different types
    return false;  // Default comparison result
}

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