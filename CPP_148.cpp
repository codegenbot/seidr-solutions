#include <vector>
#include <cctype>
#include <functional>
#include <string>

bool issame(const std::vector<std::string>& v1, const std::vector<std::string>& v2) {
    if (v1.size() != v2.size()) {
        return false;
    }
    for (size_t i = 0; i < v1.size(); ++i) {
        if (v1[i] != v2[i]) {
            return false;
        }
    }
    return true;
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