#include <iostream>
#include <string>

using namespace std;

bool check_if_last_char_is_a_letter(string txt){
    if(txt.empty()){
        return false;
    }
    int n = txt.length();
    char lastChar = txt[n-1];
    if(isalpha(lastChar)){
        if(txt[n-2] == ' '){
            return true;
        }
    }
    return false;
}

int main() {
    cout << boolalpha;
    cout << check_if_last_char_is_a_letter("apple pie ") << endl;
    cout << check_if_last_char_is_a_letter("apple pie") << endl;
    cout << check_if_last_char_is_a_letter(" apple pie") << endl;
    cout << check_if_last_char_is_a_letter("apple pi e ") << endl;

    return 0;
}