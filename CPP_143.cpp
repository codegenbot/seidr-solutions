string words_in_sentence(string sentence) {
    vector<string> words = split(sentence, ' ');
    string result;
    
    for (int i = 0; i < words.size(); i++) {
        words[i].erase(remove_if(words[i].begin(), words[i].end(), ::isspace), words[i].end());
        if (is_prime(words[i].length())) {
            result += words[i] + " ";
        }
    }
    
    return result.substr(0, result.length() - 1);
}