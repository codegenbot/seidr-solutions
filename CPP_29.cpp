```cpp
#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b){
    return a == b;
}

std::vector<std::string> filter_by_prefix(std::vector<std::string> strings, std::string prefix){
    std::vector<std::string> result;
    for(std::string s : strings){
        if(s.find(prefix) == 0)
            result.push_back(s);
    }
    return result;
}

int main() { 
    std::vector<std::string> strings = {"xxx", "asd", "xxy", "john doe", "xxxA", "xxx"};
    std::string prefix = "xxx";
    std::vector<std::string> expected = {"xxx", "xxxAAA", "xxx"};
    
    assert(issame(filter_by_prefix(strings, prefix), expected));
    return 0;
}