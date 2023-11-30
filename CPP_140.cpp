#include <iostream>
#include <string>
#include <cassert>

using namespace std;

string fix_spaces(string text);

int main() {
    assert(fix_spaces("   Exa 1 2 2 mple") == "-Exa_1_2_2_mple");
    return 0;
}

string fix_spaces(string text){
    int consecutiveSpaces = 0;
    for(int i = 0; i < text.length(); i++){
        if(text[i] == ' '){
            consecutiveSpaces++;
            if(consecutiveSpaces > 2){
                text[i] = '-';
            } else {
                text[i] = '_';
            }
        } else {
            consecutiveSpaces = 0;
        }
    }
    return text;
}