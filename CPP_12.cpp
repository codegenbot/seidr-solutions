#include <string>

std::string longest(std::vector<std::string> strings){
    if(strings.empty()){
        return "None";
    }
    
    std::string longestStr = strings[0];
    for(const std::string& str : strings){
        if(str.length() > longestStr.length() || (str.length() == longestStr.length() && str < longestStr)){
            longestStr = str;
        }
    }
    
    return longestStr;
}

int main(){
    std::vector<std::string> strings = {"apple", "banana", "orange", "kiwi"};
    std::string longestString = longest(strings);
    return 0;
}