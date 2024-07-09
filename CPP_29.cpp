#include <vector>
#include <string>
#include <initializer_list>

bool operator==(const std::vector<std::string>& a, const std::vector<std::string>& b){
    if(a.size() != b.size())
        return false;
    for(size_t i = 0; i < a.size(); ++i)
        if(a[i] != b[i])
            return false;
    return true;
}

std::vector<std::string> filter_by_prefix(std::vector<std::string> strings, std::string prefix){
    std::vector<std::string> result;
    for(auto it = strings.begin(); it != strings.end(); ++it){
        if(it->find(prefix) == std::string::npos)
            result.push_back(*it);
    }
    return result;
}

int main() {
    std::vector<std::string> a = {"xxx", "asd", "xxy", "john doe", "xxxAAs", "xxx"};
    std::vector<std::string> b = filter_by_prefix(a, "xxx");
    std::vector<std::string> c = {"xxx", "xxxAAA", "xxx"};
    assert(operator==(b, c));
    return 0;
}