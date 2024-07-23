#include <vector>
#include <string>
#include <initializer_list>

std::vector<std::string> filter_by_prefix(const std::vector<std::string>& vec, const std::string& prefix) {
    std::vector<std::string> result;
    for (const auto& str : vec) {
        if (str.find(prefix) == 0) {
            result.push_back(str);
        }
    }
    return result;
}

bool operator==(const std::vector<std::string>& a, const std::vector<std::string>& b){
    return a==b;
}

int main() {
    assert(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxA", "xxx"}, "xxx") == {"xxx", "xxxAAA", "xxx"});
    return 0;
}