#include <string>
#include <vector>

std::string concatenate(std::vector<std::string> strings);

std::string concatenate(std::vector<std::string> strings){
    std::string result = "";
    for(int i=0; i<strings.size(); i++){
        result += strings[i];
    }
    return result;
}