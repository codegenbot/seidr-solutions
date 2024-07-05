#include <string>
string concatenate(vector<std::string> strings){
    std::string result;
    for(auto s : strings)
        result += std::move(s);
    return result;
}