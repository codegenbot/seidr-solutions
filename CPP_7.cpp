#include <vector>
#include <string>

bool equal_vectors(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size())
        return false;

    for (int i = 0; i < a.size(); ++i)
        if (a[i] != b[i])
            return false;
    return true;
}

std::vector<std::string> filter_by_substring(const std::vector<std::string>& strings, const std::string& substring) {
    std::vector<std::string> result;
    for (const auto& s : strings) {
        if (s.find(substring) != std::string::npos)
            result.push_back(s);
    }
    return result;
}

int main() {
    std::vector<std::string> strings = {"grunt", "trumpet", "prune", "gruesome"};
    std::string substring = "run";
    std::vector<std::string> result = filter_by_substring(strings, substring);
    
    for (const auto& s : result) {
        std::cout << s << std::endl;
    }
}