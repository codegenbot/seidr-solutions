#include <string>

string fix_spaces(string text);

int main() {
    string text;
    getline(cin, text);
    cout << fix_spaces(text) << endl;
    return 0;
}

string fix_spaces(string text){
    int consecutiveSpaces = 0;
    string result = "";

    for(int i = 0; i < text.length(); i++){
        if(text[i] == ' '){
            consecutiveSpaces++;
            if(consecutiveSpaces > 2){
                result += "-";
            }else{
                result += "_";
            }
        }else{
            consecutiveSpaces = 0;
            result += text[i];
        }
    }

    return result;
}