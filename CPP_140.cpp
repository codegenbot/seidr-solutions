#include <string>

string fix_spaces(string text);

int main(){
    string input_text;
    getline(cin, input_text);
    string fixed_text = fix_spaces(input_text);
    cout << fixed_text << endl;
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