#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b);
std::vector<std::string> filter_by_prefix(std::vector<std::string> strings, const std::string& prefix);

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

std::vector<std::string> filter_by_prefix(std::vector<std::string> strings, const std::string& prefix){
    std::vector<std::string> result;
    for(auto str : strings) {
        if(str.find(prefix) == 0)
            result.push_back(str);
    }
    return result;
}

int main() {
    std::vector<std::string> strings;
    strings.push_back("xxx");
    strings.push_back("asd");
    strings.push_back("xxy");
    strings.push_back("john doe");
    strings.push_back("xxxAaaA");
    strings.push_back("xxx");

    assert (issame(filter_by_prefix(strings, "xxx") , {"xxx", "xxxAAA", "xxx"}));
    
    return 0;
}