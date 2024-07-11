string get_closest_vowel(string word){
    string vowels = "AEIOUaeiou";
    int closest_dist = word.size();
    int closest_idx = -1;

    for (int i = word.size() - 2; i > 0; --i) {
        if (vowels.find(word[i]) != string::npos) {
            closest_idx = i;
            break;
        }
    }

    if (closest_idx == -1) {
        return "";
    }

    for (int i = closest_idx - 1; i > 0; --i) {
        if (vowels.find(word[i]) == string::npos) {
            return string(1, word[closest_idx]);
        }
    }

    return "";
}