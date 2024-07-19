string get_closest_vowel(string word){
    string vowels = "aeiouAEIOU";
    for(int i = 0; i < word.size(); i++){
        if(vowels.find(word[i]) != std::string::npos && i > 0 && !vowels.find(word[i-1])){
            return string(1, word[i]);
        }
    }
    return "";
}