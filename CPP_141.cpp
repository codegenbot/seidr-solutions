Here is the completed code:

string file_name_check(string file_name) {
    int dot_count = 0, digit_count = 0, letter_count = 0;
    for (char c : file_name) {
        if (c == '.') {
            dot_count++;
            letter_count = 0;
            digit_count = 0;
        } else if (isdigit(c)) {
            digit_count++;
            letter_count = 0;
        } else if (isalpha(c)) {
            letter_count++;
            digit_count = 0;
        }
    }
    
    return dot_count == 1 && letter_count > 0 && digit_count <= 3 ? "Yes" : "No";
}