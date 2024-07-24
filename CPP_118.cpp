string get_closest_vowel(string word){
    string vowels = "aeiouAEIOU";
    int closest_distance = word.size();
    int closest_index = -1;
    
    for (int i = word.size() - 2; i > 0; i--) {
        if (vowels.find(word[i]) != string::npos) {
            closest_distance = min(closest_distance, i);
            closest_index = i;
        }
        if (isalpha(word[i]) && vowels.find(word[i]) == string::npos && closest_index != -1) {
            return string(1, word[closest_index]);
        }
    }
    
    return "";
}