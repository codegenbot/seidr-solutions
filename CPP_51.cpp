Here is the solution:

string remove_vowels(string text){
    string result = "";
    for (char c : text) {
        if (!isalpha(c)) {
            result += c;
        } else {
            if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' &&
                tolower(c) != 'a' && tolower(c) != 'e' && tolower(c) != 'i' &&
                tolower(c) != 'o' && tolower(c) != 'u') {
                result += c;
            }
        }
    }
    return result;
}