#include <vector>
#include <string>
#include <memory>

bool equal(const std::vector<std::string>& v1, const std::vector<std::string>& v2) {
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

std::vector<std::string> filter_by_prefix(std::vector<std::pmr::string> strings, std::pmr::string prefix){
    std::vector<std::pmr::string> result;
    for (const auto& str : strings) {
        if (str.find(prefix) == 0) {
            result.push_back(str);
        }
    }
    return result;

}

int main() {
    std::vector<std::pmr::string> a = {"xxx", "asd", "xxy", "john doe", "xxxA", "xxx"};
    std::vector<std::pmr::string> b = {"xxx", "xxxAAA", "xxx"};

    assert (equal(filter_by_prefix(a, "xxx") , b));
    return 0;
}