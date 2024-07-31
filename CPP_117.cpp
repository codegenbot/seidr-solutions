vector<string> select_words(string s, int n){
    vector<string> words;
    string current_word;
    int consonant_count = 0;

    for(int i = 0; i <= s.size(); i++){
        if(i == s.size() || s[i] == ' '){
            if(consonant_count == n){
                words.push_back(current_word);
            }
            current_word = "";
            consonant_count = 0;
        } else if(isalpha(s[i])){
            char c = tolower(s[i]);
            if(c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u'){
                consonant_count++;
            }
            current_word += s[i];
        }
    }

    return words;
}