int is_prime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

string words_in_sentence(string sentence) {
    vector<string> words;
    string word;
    int prime_count = 0;

    for (int i = 0; i < sentence.size(); i++) {
        if (sentence[i] == ' ') {
            if (is_prime(word.length())) {
                words.push_back(word);
                prime_count++;
            }
            word.clear();
        } else {
            word += sentence[i];
        }
    }

    if (is_prime(word.length()))
        words.push_back(word);

    string result;
    for (int i = 0; i < words.size(); i++) {
        result += words[i];
        if (i != words.size() - 1)
            result += ' ';
    }

    return result;
}