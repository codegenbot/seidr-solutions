#include <vector>
#include <string>

bool isspace(std::vector<std::string> a , std::vector<std::string> b);
std::vector<std::string> filter_by_prefix(std::vector<std::string> strings, const std::string& prefix);

bool isspace(std::vector<std::string> a , std::vector<std::string> b) {
    if(a.size() != b.size())
        return false;
    for(size_t i = 0; i < a.size(); i++) 
        if(a[i] != b[i])
            return false;
    return true;
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
    assert (isspace(vector<string>(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAaaA", "xxx"}, "xxx").begin(), filter_by_prefix({"xxx", "xxxAAA", "xxx"}).begin()), vector<string>(filter_by_prefix({"xxx", "xxxAAA", "xxx"}).begin(), filter_by_prefix({"xxx", "xxxAAA", "xxx"}).end())));
    return 0;
}