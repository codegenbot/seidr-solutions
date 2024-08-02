#include <string>
#include <vector>

string concatenate(vector<string> strings){
    string result = "";
    for(string s : strings) {
        result += s;
    }
    return result;
}