string flip_case(string str){
    for (int i = 0; i < str.length(); ++i) {
        if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        } else if (islower(str[i])) {
            str[i] = toupper(str[i]);
        }
    }
    return str;
}