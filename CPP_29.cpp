```cpp
#include <vector>
#include <string>

std::vector<std::string> filter_by_prefix(std::vector<std::string> strings, std::string prefix) {
    std::vector<std::string> result;
    for(auto s : strings) {
        if(s.substr(0, prefix.length()) == prefix) {
            result.push_back(s);
        }
    }
    return result;
}
```