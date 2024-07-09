#include <vector>
#include <string>

bool isSame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

std::vector<std::string> filterBySubstring(const std::vector<std::string>& strings, const std::string& substring) {
    std::vector<std::string> result;
    for (const auto& s : strings) {
        if (s.find(substring) != std::string::npos)
            result.push_back(s);
    }
    return result;
}

int testMain() { 
    assert(isSame({{"grunt", "trumpet", "prune", "gruesome"}, {"run"}}, {{"grunt", "prune"}}));
    std::vector<std::string> strings = {"grunt", "trumpet", "prune", "gruesome"};
    std::string substr = "run";
    std::vector<std::string> result = filterBySubstring(strings, substr);
    
    for (const auto& s : result) {
        std::cout << s << std::endl;
    }
}

int main() {
    testMain();
}