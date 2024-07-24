```cpp
#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b);
std::vector<std::string> filter_by_prefix(std::vector<std::string> strings, std::string prefix);

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<std::string> filter_by_prefix(std::vector<std::string> strings, std::string prefix){
    std::vector<std::string> result;
    for(auto s : strings) {
        if(s.find(prefix) == 0) {
            result.push_back(s);
        }
    }
    return result;
}

int main() {
    std::vector<std::string> strings = {"xxx", "asd", "xxy", "john doe", "xxxAaa", "xxx"};
    std::string prefix = "xxx";
    std::vector<std::string> expected = {"xxx", "xxxAAA", "xxx"};
    assert (issame(filter_by_prefix(strings, prefix) , expected));
    return 0;
}