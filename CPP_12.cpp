```cpp
#include <string>
#include <vector>

std::string findLongestString(const std::vector<std::string>& strings){
    if(strings.empty()) return "";
    std::string longest = strings[0];
    for(auto str : strings){
        if(str.length() > longest.length()){
            longest = str;
        }
        else if(str.length() == longest.length()){
            longest = str;
        }
    }
    return longest;
}