```cpp
#include <vector>
#include <string>
#include <sstream>

std::vector<std::string> bf(const std::string& s1, const std::string& s2) {
    return {s1, s2};
}

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

int mainProblem() {
    std::vector<std::string> a, b;
    std::cout << "Enter the two planets (separated by space): ";
    std::string line;
    std::getline(std::cin, line);

    size_t first = 0, last;
    std::stringstream ss(line);
    while ((first = line.find(' ')) != std::string::npos) {
        a.push_back(ss.str().substr(0, first));
        ss.str(line.substr(first + 1));
        line = ss.str();
    }
    a.push_back(line);

    line.clear();
    first = 0, last = 0;
    while ((last = line.find(' ')) != std::string::npos) {
        b.push_back(line.substr(0, last));
        line = line.substr(last + 1);
    }
    b.push_back(line);

    if (issame(a, b)) {
        std::cout << "The two planets are the same." << std::endl;
    } else {
        std::cout << "The two planets are different." << std::endl;
    }
    return 0;
}