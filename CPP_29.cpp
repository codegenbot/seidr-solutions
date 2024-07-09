```cpp
#include <initializer_list>
#include <vector>
#include <string>

bool equal_vectors(const std::vector<std::string>& a, const std::vector<std::string>& b){
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

int main_test() {
    assert (equal_vectors(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAs", "xxx"}, "xxx"), {"xxx", "xxxAAA", "xxx"}));
    std::vector<std::string> b = {"asd", "xxy", "john doe", "xAAs"};
}