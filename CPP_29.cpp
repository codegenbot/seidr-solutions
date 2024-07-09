#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::string b) {
    if(a.size() != 2) {
        return false;
    }
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b) {
            return false;
        }
    }
    return true;
}

std::vector<std::string> filter_by_prefix(std::vector<std::string> strings, std::string prefix){
    std::vector<std::string> result;
    for (const auto& s : strings) {
        if (s.find(prefix) == 0) {
            result.push_back(s);
        }
    }
    return result;
}

int main() {
    std::string b;
    assert(issame(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAffAA", "xxx"}, "xxx"), b));
    return 0;
}