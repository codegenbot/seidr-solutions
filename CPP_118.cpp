string get_closest_vowel(string word) {
    int left = 0;
    for (int right = word.size() - 1; right > 0; --right) {
        if (!isvowel(word[right])) {
            break;
        }
        left = right;
    }
    
    while (left > 0 && !isvowel(word[left - 1]))
        --left;

    return left > 0 ? word.substr(left - 1, 1) : "";
}

bool isvowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}