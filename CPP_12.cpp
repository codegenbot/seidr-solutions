#include <vector>
#include <string>
using namespace std;

string longest(vector<string> strings){
    if(strings.empty()) return "";
    string result = strings[0];
    for(auto s : strings) {
        if(s.length() > result.length())
            result = s;
    }
    return result;