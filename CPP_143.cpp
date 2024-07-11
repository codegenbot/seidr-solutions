string words_in_sentence(string sentence){
    string result = "";
    vector<string> words = split(sentence, ' ');
    for (int i = 0; i < words.size(); i++) {
        if (is_prime(words[i].length())) {
            result += words[i] + " ";
        }
    }
    return result;
}

vector<string> split(string str, char ch) {
    vector<string> tokens = {};
    string token;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ch)
            continue;
        token += str[i];
        if (i == str.length() - 1 || str[i + 1] == ch) {
            tokens.push_back(token);
            token = "";
        }
    }
    return tokens;
}

bool is_prime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}