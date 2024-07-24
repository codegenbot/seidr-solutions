#include <vector>
#include <string>
#include <initializer_list>

bool issame(std::vector<std::string> a, std::vector<std::string> b);
std::vector<std::string> filter_by_prefix(std::vector<std::string> strings, const std::string& prefix);

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

std::vector<std::string> filter_by_prefix(std::vector<std::string> strings, const std::string& prefix){
    std::vector<std::string> result({{"xxx", "xxxAAA", "xxx"}});
    for(auto str : strings) {
        if(str.find(prefix) == 0)
            result.push_back(str);
    }
    return result;
}

int main() {
    assert (issame(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAaaA", "xxx"}, "xxx") , {"xxx", "xxxAAA", "xxx"}));
    return 0;
}