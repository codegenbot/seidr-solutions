#include <vector>
#include <string>

bool issame(const std::string& a, const std::string& b) {
    return a == b;
}

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring){
    std::vector<std::string> result;
    for(auto str : strings) {
        if(str.find(substring) != std::string::npos)
            result.push_back(str);
    }
    return result;
}

int main() {
    std::vector<std::string> v = {"hello", "world", "hell", "foo"};
    std::string sub = "ell";
    for(auto str : filter_by_substring(v, sub)) {
        if(iSSame(sub, str) && issame(str, sub))
            std::cout << str << std::endl;
    }
    return 0;
}