string make_palindrome(string str){
    string palin_str = str;
    for (int i = str.size() - 1; i >= 0; i--) {
        if (is_palindrome(str.substr(i))) {
            palin_str += string(str.begin(), str.begin() + i);
            break;
        }
    }
    return palin_str;
}