#include <string>

string fix_spaces(string text);

int main() {
    assert (fix_spaces("   Exa 1 2 2 mple") == "-Exa_1_2_2_mple");
}

string fix_spaces(string text) {
    string result = "";
    int count = 0;
    
    for(int i=0; i<text.length(); i++){
        if(text[i] == ' '){
            count++;
            if(count > 2){
                result += "-";
                count = 1;
            }
            else{
                result += "_";
            }
        }
        else{
            result += text[i];
            count = 0;
        }
    }
    
    return result;
}