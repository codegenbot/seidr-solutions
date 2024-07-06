string remove_vowels(string text){
    string result = "";
    for (char c : text) {
        if (!ispunct(c) && !islower(c) && c != ' ')
            result += tolower(c);
    }
    return result;
}