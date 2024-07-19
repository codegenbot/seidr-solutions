int main() {
    string txt;
    cout << "Enter a string: ";
    cin >> txt;

    bool result = check_if_last_char_is_a_letter(txt);

    if(result)
        cout << "Last character of the string is an alphabetical character and not part of a word." << endl;
    else
        cout << "Last character of the string is not an alphabetical character or it's part of a word." << endl;

    return 0;
}

bool check_if_last_char_is_a_letter(string txt) {
    if(txt.empty()) 
        return false;
    
    int i = txt.length() - 1;
    while(i > 0 && isspace(txt[i])) {
        i--;
    }
    if(i < 0 || !isalpha(txt[i]))
        return false;

    return true;
}