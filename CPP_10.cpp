string make_palindrome(string str){
    string palin = "";
    for (int i = str.length() - 1; i >= 0; --i) {
        if (is_palindrome(str.substr(i))) {
            palin = str + string(str.rbegin(), str.rbegin() + (str.length() - i));
            break;
        }
    }
    return palin;
}