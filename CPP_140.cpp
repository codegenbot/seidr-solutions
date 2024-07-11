#include<string>
using namespace std;

string fix_spaces(string text){
    string new_text = "";
    for(int i=0; i<text.length(); i++){
        if(text[i] == ' '){
            if(i+1 < text.length() && text[i+1] == ' '){
                if(new_text.length() > 0){
                    new_text += "-";
                }
            } else {
                new_text += "_";
            }
        } else {
            new_text += text[i];
        }
    }
    return new_text;
}