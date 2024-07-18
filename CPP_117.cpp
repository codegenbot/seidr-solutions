vector<string> select_words(string s, int n){
    vector<string> result;
    string current_word = "";
    const string vowels = "aeiouAEIOU";

    for(char c : s) {
        if(c == ' ') {
            int consonants = count_if(current_word.begin(), current_word.end(), [](char ch){ return (isalpha(ch) && vowels.find(ch) == string::npos); });

            if(consonants == n) {
                result.push_back(current_word);
            }

            current_word = "";
        } else {
            current_word += c;
        }
    }

    int consonants = count_if(current_word.begin(), current_word.end(), [](char ch){ return (isalpha(ch) && vowels.find(ch) == string::npos); });

    if(consonants == n) {
        result.push_back(current_word);
    }

    return result;
}