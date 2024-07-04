#include <iostream>
#include <vector>
#include <string>

std::string exchange(const std::vector<int> &lst1, const std::vector<int> &lst2) {
    // Check if lst1 already contains only even numbers
    bool allEven = true;
    for (int num : lst1) {
        if (num % 2 != 0) {
            allEven = false;
            break;
        }
    }
    if (allEven) return "YES";

    // Check if there is at least one even number in lst2
    for (int num : lst2) {
        if (num % 2 == 0) {
            return "YES";
        }
    }

    return "NO";
}

int main() {
    std::cout << std::boolalpha;
    std::cout << (exchange({100, 200}, {200, 200}) == "YES") << std::endl; // Expected output: true
    std::cout << (exchange({100, 201}, {201, 203}) == "NO") << std::endl; // Expected output: true
    return 0;
}