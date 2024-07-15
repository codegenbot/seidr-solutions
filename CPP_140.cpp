#include <iostream>
#include <string>
#include <cassert>

using namespace std;

string fix_spaces(string text){
    string result = "";
    int consecutiveSpaces = 0;
    for(char c : text){
        if(c == ' '){
            consecutiveSpaces++;
            if(consecutiveSpaces > 2){
                result += "-";
                consecutiveSpaces = 1;
            } else {
                result += "_";
            }
        } else {
            result += c;
            consecutiveSpaces = 0;
        }
    }
    return result;
}

int main() {
    assert(fix_spaces("   Exa 1 2 2 mple") == "-Exa_1_2_2_mple");
    return 0;
}