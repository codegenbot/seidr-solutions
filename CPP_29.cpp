```c++
#include <vector>
#include <string>

std::vector<std::string> filter_by_prefix(std::vector<std::string> strings, std::string prefix){
    std::vector<std::string> result;
    for (std::string s : strings) {
        if (s.find(prefix) == 0)
            result.push_back(s);
    }
    return result;
}

bool checkEqual(std::vector<std::string> a, std::vector<std::string> b){
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    assert(checkEqual(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAZA", "xxx"}, "xxx"), {"xxx", "xxxAAA", "xxx"}));
    return 0;
}