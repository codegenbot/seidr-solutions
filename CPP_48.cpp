string remove_spaces_and_convert_to_lower(text) {
    string str = "";
    for (char c : text) {
        if (c != ' ') {
            str += tolower(c);
        }
    }
    return str;
}

bool is_palindrome(string text) {
    string str = remove_spaces_and_convert_to_lower(text);
    int i = 0, j = str.length() - 1;
    while (i < j) {
        if (str[i] != str[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}