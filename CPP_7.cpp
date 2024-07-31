```cpp
#include <iostream>
#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a.size() == b.size() && std::all_of(a.begin(), a.end(),
        [&b](const auto& s) { return std::find(b.begin(), b.end(), s) != b.end(); });
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
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 

    std::vector<std::string> strings;
    for (int i = 0; i < n; ++i) {
        std::string s;
        std::getline(std::cin, s); 
        strings.push_back(s);
    }

    std::string substring;
    std::getline(std::cin, substring);

    std::vector<std::string> result1 = filter_by_substring(strings, substring);
    std::vector<std::string> temp;
    for (auto it = strings.begin(); it != strings.end(); ++it) {
        if ((*it).find(substring) != std::string::npos) {
            temp.push_back(*it);
        }
    }
    std::vector<std::string> result2 = filter_by_substring(temp, substring);

    if (issame(result1, result2)) {
        for (const auto& s : result1) {
            std::cout << s << std::endl;
        }
    } else {
        std::cout << "No common elements found." << std::endl;
    }

    return 0;
}