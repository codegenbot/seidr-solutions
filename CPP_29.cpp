#include <initializer_list>
#include <vector>
#include <string>

std::vector<std::string> filter_by_prefix(std::vector<std::string> strings, std::string prefix) {
    std::vector<std::string> result;
    for (const auto& s : strings) {
        if (s.find(prefix) == 0) {
            result.push_back(s);
        }
    }
    return result;
}

bool areEqual(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a.size() == b.size();
}

int main() {
    std::vector<std::string> strings = {"xxx", "asd", "xxy", "john doe", "xxxxAAA", "xxx"};
    std::string prefix;
    std::cout << "Enter the prefix: ";
    std::cin >> prefix;

    std::vector<std::string> result = filter_by_prefix(strings, prefix);

    if (areEqual(result, {"xxx", "xxxAAA", "xxx"})) {
        std::cout << "The strings are equal." << std::endl;
    } else {
        std::cout << "The strings are not equal." << std::endl;
    }

    return 0;
}