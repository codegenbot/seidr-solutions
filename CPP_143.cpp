string words_in_sentence(string sentence) {
    string result = "";
    string word = "";
    bool is_prime[101] = {false};
    for (int i = 2; i <= 100; i++) {
        is_prime[i] = true;
    }
    
    for (int i = 2; i * i <= 100; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= 100; j += i) {
                is_prime[j] = false;
            }
        }
    }
    
    int start = 0;
    for (int i = 0; i <= sentence.length(); i++) {
        if (i == sentence.length() || sentence[i] == ' ') {
            if (is_prime[word.length()]) {
                result += word + " ";
            }
            word = "";
            start = i + 1;
        } else {
            word += sentence[i];
        }
    }
    
    return result.substr(0, result.length()-1);
}