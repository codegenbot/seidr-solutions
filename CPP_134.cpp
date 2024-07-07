int main() {
    string txt;
    cout << "Enter a string: ";
    cin >> txt;

    bool result = check_if_last_char_is_a_letter(txt);

    if(result)
        printf("Last character of the input string is an alphabetical character and is not part of a word.\n");
    else
        printf("Last character of the input string is not an alphabetical character or it's part of a word.\n");

    return 0;
}

bool check_if_last_char_is_a_letter(string txt) {
    if(txt.empty()) // Check for empty string
        return false;

    int last_index = txt.length() - 1; // Get the index of the last character

    char last_char = txt[last_index]; // Get the last character

    if(isalpha(last_char)) { // Check if the last character is alphabetical
        if(!isalnum(txt[last_index])) { // Check if it's not part of a word (not alphanumeric)
            return true;
        }
    }

    return false;
}