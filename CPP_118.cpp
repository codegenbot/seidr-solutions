string get_closest_vowel(string word) {
    string vowels = "aeiouAEIOU";
    int closest_index = -1;
    
    for (int i = word.size() - 2; i > 0; --i) {
        if (vowels.find(word[i]) != string::npos) {
            closest_index = i;
            break;
        }
    }
    
    if (closest_index == -1) {
        return "";
    }
    
    return string(1, word[closest_index]);
}