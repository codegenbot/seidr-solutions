#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::vector<std::string> parts;
    size_t pos = 0;

    while ((pos = str.find('-')) != std::string::npos) {
        parts.push_back(str.substr(0, pos));
        str.erase(0, pos + 1);
    }

    if (!str.empty()) parts.push_back(str);

    for (size_t i = 0; i < parts.size(); ++i) {
        if (i > 0)
            parts[i][0] = toupper(parts[i][0]);
    }

    return std::accumulate(parts.begin(), parts.end(), "",
                            [](const std::string& a, const std::string& b) {
                                return a + (a.empty() ? "" : " ") + b;
                            });
}

int main() {
    std::cout << camelCase("nospaceordash") << std::endl;
    std::cout << camelCase("two-words") << std::endl;
    std::cout << camelCase("two words") << std::endl;
    std::cout << camelCase("all separate words") << std::endl;
    return 0;
}