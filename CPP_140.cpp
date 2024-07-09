#include <string>
using namespace std;

string fix_spaces(string text){
    string result = "";
    bool prevSpace = false;

    for(char c : text){
        if(c == ' '){
            if(!prevSpace || !result.empty()){
                result += (prevSpace) ? "-" : "_";
            }
            prevSpace = true;
        }else{
            result += c;
            prevSpace = false;
        }
    }

    return result;
}