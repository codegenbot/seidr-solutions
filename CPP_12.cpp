#include <vector>
#include <string>
#include <cassert>

std::string longest(std::vector<std::string> strings);

std::string longest(std::vector<std::string> strings){
    if(strings.empty()) return "None";
    
    std::string longest_str = strings[0];
    for(const std::string& str : strings){
        if(str.length() > longest_str.length() || (str.length() == longest_str.length() && str < longest_str)){
            longest_str = str;
        }
    }
    
    return longest_str;
}

int main(){
    assert(longest({"x", "yyy", "zzzz", "www", "kkkk", "abc"}) == "zzzz");
    return 0;
}