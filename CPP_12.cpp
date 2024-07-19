#include <string>

std::string longest(std::vector<std::string> strings){
    std::string result = strings[0];
    for(int i=1; i<strings.size(); i++){
        if(strings[i].size() > result.size()){
            result = strings[i];
        }
    }
    return result;
}