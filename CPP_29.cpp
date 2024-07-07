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

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a.size() == b.size();
}

int main() {
    std::vector<std::string> strings = {"xxx", "asd", "xxy", "john doe", "xxxxAA", "xxx"};
    std::vector<std::string> result = filter_by_prefix(strings, "xxx");
    
    std::vector<std::string> b = {"xxx", "xxx", "xxx"};

    assert(issame(result, b));
    return 0;
}