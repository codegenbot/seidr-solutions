string flip_case(string str){
    for (char &c : str) {
        if (isupper(c))
            c = tolower(c);
        else if (islower(c))
            c = toupper(c);
    }
    return str;
}