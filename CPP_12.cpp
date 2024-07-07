#include<iomanip>
#include<vector>
#include<string>
using namespace std;

string longest(vector<string> strings){
    if(strings.empty()) return "";
    string result = strings[0];
    for(auto str : strings){
        if(str.length() > result.length()){
            result = str;
        }
        else if(str.length() == result.length()){
            result = str;
        }
    }
    return result;
}