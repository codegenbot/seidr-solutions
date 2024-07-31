#include <vector>
#include <string>
#include <initializer_list>

std::vector<std::string> filterByPrefix(const std::vector<std::string>& strings, const std::string& prefix) {
    std::vector<std::string> result;
    for (const auto& str : strings) {
        if (str.find(prefix) == 0) {
            result.push_back(str);
        }
    }
    return result;
}

bool isSame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    std::vector<std::string> strings = {"xxx", "asd", "xxy", "john doe", "xxxxAAA", "xxx"};
    std::string prefix = "xxx";
    std::vector<std::string> filteredStrings = filterByPrefix(strings, prefix);
    bool result = isSame(filteredStrings, filteredStrings); 
    assert(isSame(filteredStrings, {"xxx", "xxxAAA", "xxx"}));
    return 0;
}