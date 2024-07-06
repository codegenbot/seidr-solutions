int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    bool res = check_if_last_char_is_a_letter(s);
    if (res)
        cout << "The last character is an alphabetical character and is not part of a word." << endl;
    else
        cout << "The last character is not an alphabetical character or it is part of a word." << endl;
}