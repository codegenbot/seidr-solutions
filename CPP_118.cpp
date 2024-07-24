string vowels = "AEIOUaeiou";
    string filteredWord = word.substr(1, word.length() - 2);
    
    for (int i = filteredWord.length() - 1; i >= 0; i--) {
        if (vowels.find(filteredWord[i]) != string::npos) {
            return string(1, filteredWord[i]);
        }
    }
    
    return "";
}