#include <vector>
#include <string>

bool compare(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<std::string> filter_by_prefix(const std::vector<std::string>& strings, const std::string& prefix) {
    std::vector<std::string> result;
    for (const auto& s : strings) {
        if (s.find(prefix) == 0)
            result.push_back(s);
    }
    return result;

}

int main() {
    std::vector<std::string> strings = {"xxx", "asd", "xxy", "john doe", "xxxxAAA", "xxx"};
    std::string prefix;
    std::cout << "Enter the prefix: ";
    std::cin >> prefix;
    std::vector<std::string> result = filter_by_prefix(strings, prefix);
    if (compare(result, {"xxx", "xxxAAA", "xxx"})) {
        for (const auto& s : result) {
            std::cout << s << std::endl;
        }
    } else {
        std::cout << "No strings match the given prefix." << std::endl;
    }
    return 0;
}