```
string remove_vowels(string text){
    string result = "";
    for (char c : text) {
        if (!(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'
              || toupper(c) == 'A' || tolower(c) == 'E' || tolower(c) == 'I' 
              || tolower(c) == 'O' || tolower(c) == 'U')) {
            result += c;
        }
    }
    return result;
}