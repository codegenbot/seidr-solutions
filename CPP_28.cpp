```cpp
#include <string>
string concatenate(vector<std::string> strings){
    std::string result = "";
    for(auto s : strings)
        result += s;
    return result;
}