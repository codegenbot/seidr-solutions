vector<string> select_words(string s, int n){
    vector<string> result;
    string current_word = "";
    int consonant_count = 0;
    for (char c : s){
        if (c != ' '){
            if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u'){
                consonant_count++;
            }
            current_word += c;
        }
        else{
            if (consonant_count == n){
                result.push_back(current_word);
            }
            current_word = "";
            consonant_count = 0;
        }
    }
    if (consonant_count == n){
        result.push_back(current_word);
    }
    return result;
}