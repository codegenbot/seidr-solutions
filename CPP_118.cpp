string vowels = "AEIOUaeiou";
    string result = "";
    int n = word.size();
    
    for (int i = n - 2; i > 0; --i) {
        if (vowels.find(word[i]) != string::npos) {
            for (int j = i - 1; j > 0; --j) {
                if (vowels.find(word[j]) == string::npos) {
                    result = word[i];
                    return result;
                }
            }
        }
    }
    
    return result;
}