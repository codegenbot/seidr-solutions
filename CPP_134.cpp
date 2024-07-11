int main() {
    string txt;
    cout << "Enter a string: ";
    cin >> txt;
    bool result = check_if_last_char_is_a_letter(txt);
    if(result)
        cout << "Last character of the string is an alphabetical character and is not part of a word." << endl;
    else
        cout << "Last character of the string is either not an alphabetical character or it's part of a word." << endl;
    return 0;
}

bool check_if_last_char_is_a_letter(string txt) {
    if(txt.empty()) return false; // empty string, return false
    char lastChar = txt.back(); // get the last character
    if(!isalpha(lastChar)) return false; // not an alphabetical character, return false
    for(int i=0; i<txt.length()-1; i++) { // check all characters before the last one
        if(!isspace(txt[i])) {
            return true; // found a non-space character, return true
        }
    }
    return false; // no non-space characters before the last one, return false
}