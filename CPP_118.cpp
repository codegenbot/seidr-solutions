string get_closest_vowel(string word){
    string vowels = "aeiouAEIOU";
    int closest_distance = word.size();
    char closest_vowel = ' ';
    
    for (int i = word.size() - 2; i > 0; i--) {
        if (vowels.find(word[i]) != string::npos && !isalpha(word[i - 1]) && !isalpha(word[i + 1])) {
            int distance = word.size() - 1 - i;
            if (distance < closest_distance) {
                closest_vowel = word[i];
                closest_distance = distance;
            }
        }
    }
    
    return closest_vowel != ' ' ? string(1, closest_vowel) : "";
}