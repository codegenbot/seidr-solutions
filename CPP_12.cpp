#include <string>
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

int main() {
    assert(longest({"x", "yyy", "zzzz", "www", "kkkk", "abc"}) == 5);
    return 0;
}