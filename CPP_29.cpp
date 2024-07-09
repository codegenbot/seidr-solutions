#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<std::string> filter_by_prefix(const std::vector<std::string>& strings, const std::string& prefix) {
    std::vector<std::string> result;
    for (const auto& str : strings) {
        if (str.find(prefix) == 0) {
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    std::vector<std::string> strings;
    strings.push_back("hello");
    strings.push_back("hi");
    strings.push_back("helloworld");

    std::string prefix = "h";
    std::vector<std::string> result = filter_by_prefix(strings, prefix);

    for (const auto& str : result) {
        std::cout << str << std::endl;
    }

    return 0;
}