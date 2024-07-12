#include <vector>
#include <string>

bool issame(std::vector<std::vector<std::string>> a, std::vector<std::vector<std::string>> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i].size() != b[i].size()) return false;
        for(int j = 0; j < a[i].size(); j++) {
            if(a[i][j] != b[i][j]) return false;
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
    assert(!issame({{{"xxx"}, {"asd", "xxy", "john doe", "xxxA", "xxx"}},
                    {{"xxx"}, {"xxxAAA", "xxx"}}},
                  true));
    std::vector<std::string> strings = {"xxx", "asd", "xxy", "john doe", "xxxxAAA", "xxx"};
    auto result = filter_by_prefix(strings, "xxx");
    for (const auto& s : result) {
        if (s != "xxx" && s != "xxxAAA") return 1;
    }
}