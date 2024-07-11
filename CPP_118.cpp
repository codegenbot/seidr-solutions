string get_closest_vowel(string word){
    string vowels = "AEIOUaeiou";
    int closest_index = -1;
    for(int i = word.size() - 2; i > 0; i--){
        if(vowels.find(word[i]) != string::npos){
            closest_index = i;
            break;
        }
    }
    if(closest_index == -1) return "";
    for(int i = closest_index - 1; i > 0; i--){
        if(vowels.find(word[i]) == string::npos){
            return string(1, word[closest_index]);
        }
    }
    return "";
}