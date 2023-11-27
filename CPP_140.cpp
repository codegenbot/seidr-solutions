#include <iostream>
#include <string>

using namespace std;

string fix_spaces(string text);

int main() {
    assert (fix_spaces("   Exa 1 2 2 mple") == "-Exa_1_2_2_mple");
    
    return 0;
}

string fix_spaces(string text){
    for(int i=0; i<text.length(); i++){
        if(text[i] == ' '){
            text[i] = '_';
            if(i+1<text.length() && text[i+1] == ' '){
                text[i] = '-';
                while(i+1<text.length() && text[i+1] == ' '){
                    text.erase(i+1, 1);
                }
            }
        }
    }
    return text;
}