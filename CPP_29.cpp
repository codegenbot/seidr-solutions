#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    bool result = true;
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (!(a[i] == b[i])) result = false;
    }
    return result;
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
    std::vector<std::string> a = filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAaaA", "xxx"}, "xxx");
    std::vector<std::string> b = {"xxx", "xxxAAA", "xxx"};
    assert (issame(a, b));
    return 0;
}