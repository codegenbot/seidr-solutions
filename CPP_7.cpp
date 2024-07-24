```cpp
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring) {
    std::vector<std::string> result;
    for (const auto& str : strings) {
        if (str.find(substring) != std::string::npos) {
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    std::vector<std::string> strings = {"apple", "banana", "orange"};
    std::string substring = "an";
    auto filtered = filter_by_substring(strings, substring);
    if (issame(filtered, strings)) {
        std::cout << "No strings were found with the given substring.\n";
    } else {
        for (const auto& str : filtered) {
            std::cout << str << "\n";
        }
    }
    return 0;
}