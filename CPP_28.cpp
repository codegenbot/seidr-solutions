#include <vector>
#include <string>

std::string concatenate(std::vector<std::string> strings){
    std::string result = "";
    for(string s : strings){
        result += s;
    }
    return result;
}