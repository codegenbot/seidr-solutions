int main() {
    string txt;
    cin >> txt;

    bool result = false;
    
    if(txt.length() > 0) {
        char last_char = txt[txt.length()-1];
        
        if(isalpha(last_char)) {
            if(!isalnum(last_char)) { // Check if the last character is not alphanumeric
                result = true;
            }
        }
    }

    cout << (result ? "true" : "false") << endl;

    return 0;
}