int vowels_count(string s){
    int count = 0;
    transform(s.begin(), s.end(), s.begin(), ::tolower); // convert all characters to lowercase
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
            count++;
        }
    }
    // check for 'y' at the end of the word
    if (s.back() == 'y') {
        count++;
    }
    return count;
}