```cpp
#ifdef __GNUC__
#pragma GCC diagnostic push
#endif //__GNUC__

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
    std::vector<std::string> a = {"xxx", "asd", "xxy", "john doe", "xxxAAs", "xxx"};
    std::vector<std::string> b;
    for(auto str : a) if(str.find("xxx") == std::string::npos) b.push_back(str);
    std::vector<std::string> c = {"xxx", "xxxAAA", "xxx"};
    if(!equal_vectors(b, c))
        return 1;
    return 0;
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif //__GNUC__