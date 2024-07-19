```cpp
#include <vector>
#include <cctype>
#include <functional>

std::string bf(const std::string& s1, const std::string& s2) {
    return s1 + " " + s2;
}

bool issame(const std::vector<std::string>& v1, const std::vector<std::string>& v2) {
    return v1.size() == v2.size() && std::equal(v1.begin(), v1.end(), v2.begin(), [](const auto& x, const auto& y){return x == y;});
}

int main() {
    std::vector<std::string> a, b;
    std::cout << "Enter the two planets (separated by space): ";
    std::string line;
    std::getline(std::cin, line);

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