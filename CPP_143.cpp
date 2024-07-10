string words_in_sentence(string sentence){
    string result = "";
    int n = sentence.size();
    int i = 0;
    while (i < n) {
        string word = "";
        while (i < n && sentence[i] != ' ') {
            word += sentence[i];
            i++;
        }
        if (is_prime(word.size())) {
            result += word + " ";
        }
        i++;
    }
    return result;
}