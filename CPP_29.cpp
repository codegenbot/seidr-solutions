```cpp
#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b){
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
    std::vector<std::string> str = {"xxx", "asd", "xxy", "john doe", "xxxA", "xxx"};
    std::vector<std::string> expected = filter_by_prefix(str, "xxx");
    assert(issame(expected, {"xxx", "xxxAAA", "xxx"}) );
    return 0;
}