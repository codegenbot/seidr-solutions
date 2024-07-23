#include <vector>
#include <string>

string concatenate(vector<string> strings){
    string result = "";
    for(auto s : strings) {
        result += s;
    }
    return result;
}