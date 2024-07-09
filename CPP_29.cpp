```cpp
#include <vector>
#include <string>

bool issame(std::vector<std::string>, std::vector<std::string>);

int main() {
    assert(issame(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxA", "xxx"}, "xxx"), {"xxx", "xxxAAA", "xxx"}));
    return 0;
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    for (const auto& s : a) {
        if (std::find(b.begin(), b.end(), s) == b.end()) {
            return false;
        }
    }
    return true;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for (const auto& s : strings) {
        if (s.find(prefix) == 0) {
            result.push_back(s);
        }
    }
    return result;
}