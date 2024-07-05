```cpp
#include <string>
string concatenate(vector<string> strings){
    std::string result = "";
    for(auto s : strings)
        result += s;
    return result;
}