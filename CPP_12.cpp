```cpp
#include <cassert>
#include <vector>

int longest(std::vector<std::string> strings){
    if(strings.empty()) return 0;
    int result = strings[0].size();
    for(auto s : strings) {
        if(s.size() > result) {
            result = s.size();
        } 
    }
    return result;
}

std::vector<std::string>({"x", "yyy", "zzzz", "www", "kkkk", "abc"});