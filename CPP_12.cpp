#include <iostream>
#include <cassert>
#include <vector>
#include <string>

std::string longest(std::vector<std::string> strings){
    if(strings.empty()) return "";
    std::string result = strings[0];
    for(auto str : strings){
        if(str.length() > result.length()){
            result = str;
        }
    }
    return result;
}

int main(){
    assert (longest({"x", "yyy", "zzzz", "www", "kkkk", "abc"}) == "zzzz");
    return 0;
}