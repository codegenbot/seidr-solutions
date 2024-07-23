bool isvowl(char c) {
    string vowels = "aeiouAEIOU";
    return (find(vowels.begin(), vowels.end(), tolower(c)) != vowels.end());
}