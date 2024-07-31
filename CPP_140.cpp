#include <string>
#include <iostream>
#include <cassert>

using namespace std;

string fix_spaces(string text){
    string result = "";
    bool prevSpace = false;
    
    for(int i=0; i<text.length(); i++){
        if(text[i] == ' '){
            if(!prevSpace) {
                result += '_';
                prevSpace = true;
            } else {
                result += '-';
                prevSpace = false;
            }
        } else {
            result += text[i];
            prevSpace = false;
        }
    }
    
    return result;
}

int main() {
    assert(fix_spaces("   Exa 1 2 2 mple") == "-Exa_1_2_2_mple");
    return 0;
}