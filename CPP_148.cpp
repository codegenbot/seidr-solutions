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
    for (std::string s; std::cin >> s;)
        if (!(a.size() < 2)) {
            b = a;
            a.clear();
            break;
        }
        else
            a.push_back(s);

    if (issame({a}, {b})) {
        std::cout << "The two planets are the same." << std::endl;
    } else {
        std::cout << "The two planets are different." << std::endl;
    }
}