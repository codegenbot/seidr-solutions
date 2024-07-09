#include <string>
#include <vector>
#include <cassert>

std::string longest(std::vector<std::string> strings){
    if(strings.empty()) return "";
    std::string result = strings[0];
    for(auto s : strings){
        if(s.length() > result.length()){
            result = s;
        }
    }
    return result;
}

int main(){
    assert (longest({"x", "yyy", "zzzz", "www", "kkkk", "abc"}) == "zzzz");
    return 0;
}