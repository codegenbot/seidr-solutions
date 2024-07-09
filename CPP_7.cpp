#include <vector>
#include <string>

std::vector<std::string> filter_by_substring(const std::vector<std::string>& strings, const std::string& substring) {
    std::vector<std::string> result;
    for (const auto& s : strings) {
        if (s.find(substring) != std::string::npos)
            result.push_back(s);
    }
    return result;
}

int main() {
    std::vector<std::string> a = filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run");
    std::vector<std::string> b = {"grunt", "prune"};
    if (a == b) {
        for (const auto& s : a) {
            std::cout << s << std::endl;
        }
    } else {
        std::cout << "Result is not the same as expected." << std::endl;
    }
}