```cpp
#include <vector>
#include <string>

bool issame(vector<string> strings1, vector<string> strings2){
    return strings1 == strings2;
}

std::vector<std::string> filter_by_prefix(std::vector<std::string> strings, std::string prefix) {
    std::vector<std::string> result;
    for (std::string s : strings) {
        if (s.find(prefix) == 0)
            result.push_back(s);
    }
    return result;
}

int main() {
    assert(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxxAAA", "xxx"}, "xxx") ==  {"xxx", "xxxAAA", "xxx"});
    return 0;
}