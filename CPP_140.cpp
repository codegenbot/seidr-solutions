#include <string>
#include <cassert>

string fix_spaces(string text) {
    for(int i=0; i<text.length(); i++){
        if(text[i] == ' '){
            text[i] = '_';
            int count = 1;
            while(i+1 < text.length() && text[i+1] == ' '){
                text.replace(i, 2, "-");
            }
        }
    }
    return text;
}

int main() {
    string input_text;
    getline(cin, input_text);
    string result = fix_spaces(input_text);
    cout << result << endl;

    return 0;
}