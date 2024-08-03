string txt;
cout << "Enter a string: ";
getline(cin, txt);

bool check_if_last_char_is_a_letter(string txt) {
    if(txt.empty()) return false; // If the string is empty, return false
    char lastChar = txt.back(); // Get the last character of the string
    for(int i = 0; i < txt.length() - 1; i++) { // Check all characters before the last one
        if(lastChar == txt[i]) {
            return false;
        }
    }
    if(isalpha(lastChar)) { // If the last character is a letter, return true
        return true;
    } else {
        return false;
    }
}

int main() {
    cout << check_if_last_char_is_a_letter(txt) << endl; // Call the function and print the result
    return 0;
}