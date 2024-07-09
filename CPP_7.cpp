#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
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
    assert(issame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run"), {"grunt", "prune"}));
    std::vector<std::string> strings = {"grunt", "trumpet", "prune", "gruesome"};
    std::string substr = "run";
    std::vector<std::string> result = filter_by_substring(strings, substr);
    
    for (const auto& s : result) {
        std::cout << s << std::endl;
    }
}