```cpp
#include <vector>
#include <string>

bool areSame(const std::vector<std::string>& v1, const std::vector<std::string>& v2) {
    if (v1.size() != v2.size()) {
        return false;
    }
    for (size_t i = 0; i < v1.size(); ++i) {
        if (v1[i] != v2[i]) {
            return false;
        }
    }
    return true;
}

std::vector<std::string> filter_by_prefix(std::vector<std::pair<std::string, std::string>> strings, std::string prefix){
    std::vector<std::string> result;
    for (const auto& str : strings) {
        if (str.second.find(prefix) == 0) {
            result.push_back(str.second);
        }
    }
    return result;

}
int main_function() {
    std::vector<std::pair<std::string, std::string>> a = {{"xxx", "xxx"}, {"asd", "asd"}, {"xxy", "xxy"}, {"john doe", "john doe"}, {"xxxA", "xxxA"}, {"xxx", "xxx"}};
    std::vector<std::pair<std::string, std::string>> b = {{"xxx", "xxx"}, {"xxxAAA", "xxxAAA"}, {"xxx", "xxx"}};

    assert (areSame(filter_by_prefix(a, "xxx").size() , b.size()));
    return 0;
}