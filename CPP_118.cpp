string get_closest_vowel(string word) {
    string vowels = "aeiouAEIOU";
    int i = 0;
    
    while(i < word.length()) {
        if(vowels.find(word[i]) != std::string::npos)
            break;
        i++;
    }
    
    for(int j = i; j < word.length(); j++) {
        if(vowels.find(word[j]) != std::string::npos) 
            return word.substr(i, j - i);
    }
    
    return "";
}