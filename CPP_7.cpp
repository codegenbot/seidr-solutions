#include <algorithm>
#include <vector>
#include <string>

bool areEqual(const std::vector<std::string>& v1, const std::vector<std::string>& v2) {
    return v1 == v2;
}

std::vector<std::string> filter_by_substring(const std::vector<std::string>& strings, const std::string& substring) {
    std::vector<std::string> result;
    for (const auto& s : strings) {
        if (s.find(substring) != std::string::npos) {
            result.push_back(s);
        }
    }
    return result;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<std::string> strings;
    std::string s;
    for (int i = 0; i < n; ++i) {
        std::getline(std::cin, s); 
        strings.push_back(s);
    }

    std::string substring;
    std::getline(std::cin, substring);

    auto result1 = filter_by_substring(strings, substring);

    if (areEqual(strings, result1)) {
        for (const auto& s : strings) {
            std::cout << s << std::endl;
        }
    } else {
        std::cout << "No common elements found." << std::endl;
    }

    return 0;
}