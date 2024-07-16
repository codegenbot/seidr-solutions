string get_closest_vowel(string word){
    string vowels = "aeiouAEIOU";
    int closest_distance = word.size();
    char closest_vowel = ' ';
    
    for (int i = word.size() - 2; i > 0; --i) {
        if (vowels.find(word[i]) != string::npos) {
            for (int j = i - 1; j > 0; --j) {
                if (vowels.find(word[j]) == string::npos) {
                    int distance = i - j;
                    if (distance < closest_distance) {
                        closest_distance = distance;
                        closest_vowel = word[i];
                    }
                    break;
                }
            }
        }
    }
    
    if (closest_vowel != ' ') {
        return string(1, closest_vowel);
    } else {
        return "";
    }
}