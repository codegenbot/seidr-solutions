#include <vector>
#include <string>

std::vector<std::string> bf(std::string a, std::string b) {
    if (a.length() > b.length()) {
        for (size_t i = 0; i <= b.length(); ++i) {
            b.insert(0, a);
        }
    } else if (b.length() > a.length()) {
        for (size_t i = 0; i <= a.length(); ++i) {
            a.insert(0, b);
        }
    }
    return {a, b};
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) { 
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    std::string b;
    std::cout << "Enter the second string: ";
    std::cin >> b;
    assert(issame({bf("Jupiter", b)}, {})); 
}