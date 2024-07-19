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
    std::string line;
    std::cin >> line;

    size_t first = 0, last;
    while ((last = line.find(' ')) != std::string::npos) {
        a.push_back(line.substr(first, last - first));
        first = last + 1;
    }
    a.push_back(line.substr(first));

    line.clear();
    first = 0, last = 0;
    while ((last = line.find(' ')) != std::string::npos) {
        b.push_back(line.substr(first, last - first));
        first = last + 1;
    }
    b.push_back(line.substr(first));

    if (issame(a, b)) {
        std::cout << "The two planets are the same." << std::endl;
    } else {
        std::cout << "The two planets are different." << std::endl;
    }
}