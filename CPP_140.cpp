#include<string>
using namespace std;

string fix_spaces(string text){
    string result = "";
    bool spaceFound = false;
    for(char c : text){
        if(c == ' '){
            if(spaceFound) {
                result += "-";
            } else {
                result += "_";
                spaceFound = true;
            }
        } else {
            result += c;
            spaceFound = false;
        }
    }
    return result;
}