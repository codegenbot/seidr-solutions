string vowels = "AEIOUaeiou";
    reverse(word.begin(), word.end());
    bool foundConsonant = false;
    
    for (char& c : word) {
        if (vowels.find(c) != string::npos) {
            if (foundConsonant) {
                return string(1, c);
            }
        } else if (isalpha(c)) {
            foundConsonant = true;
        }
    }
    return "";
}