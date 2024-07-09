```cpp
#include <vector>
#include <string>
#include <initializer_list>

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring){
    std::vector<std::string> result;
    for(string s : strings) {
        if(s.find(substring) != std::string::npos) {
            result.push_back(s);
        }
    }
    return result;
}

bool issame(std::initializer_list<std::vector<std::string>> a, std::vector<std::string> b) {
    bool same = true;
    for(auto v : a) {
        if(v != b) {
            same = false;
            break;
        }
    }
    return same;
}

int main() {
    assert(issame({{filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run") }}, {"grunt", "prune"}));
    return 0;
}