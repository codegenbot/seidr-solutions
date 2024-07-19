```cpp
#include <string>
#include <cctype>
#include <vector>
#include <assert.h>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    std::vector<std::string> a, b;
    std::cout << "Enter the two planets (separated by space): ";
    std::cin >> a >> b;

    if (issame({a}, {b})) {
        std::cout << "The two planets are the same." << std::endl;
    } else {
        std::cout << "The two planets are different." << std::endl;
    }
}