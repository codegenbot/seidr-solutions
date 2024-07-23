```
int flip_case(string s) {
    string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            char newChar = ' ';
            if (c >= 'a' && c <= 'z') 
                newChar = tolower(c);
            else if (c >= 'A' && c <= 'Z')
                newChar = toupper(c); 
            result += newChar;
        } 
        else
            result += c; 
    }
    return 0;
}