#include <vector>
#include <string>
#include <initializer_list>

bool operator==(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<std::string> filter_by_substring(const std::vector<std::string>& strings, const std::string& substring) {
    std::vector<std::string> output_vector;
    for (const auto& s : strings) {
        if (s.find(substring) != std::string::npos)
            output_vector.push_back(s);
    }
    return output_vector;
}

int main() {
    std::vector<std::string> strings = {"grunt", "trumpet", "prune", "gruesome"};
    std::string substr = "run";
    std::vector<std::string> result = filter_by_substring(strings, substr);
    
    for (const auto& s : result) {
        std::cout << s << std::endl;
    }
}