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

std::vector<std::string> filter_by_prefix(std::vector<std::string> strings, std::string prefix){
    std::vector<std::string> result;
    for (const auto& str : strings) {
        if (str.find(prefix) == 0) {
            result.push_back(str);
        }
    }
    return result;

}
int main_function() {
    std::vector<std::string> a = {"xxx", "asd", "xxy", "john doe", "xxxA", "xxx"};
    std::vector<std::string> b = {"xxx", "xxxAAA", "xxx"};

    assert (areSame(filter_by_prefix(a, "xxx") , b));
    return 0;
}