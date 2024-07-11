```
string words_in_sentence(string sentence){
    string result = "";
    for (int i = 0; i < sentence.length(); i++) {
        if (is_prime(stoi(&sentence[i+1])) && is_space(sentence, i)) {
            result += &sentence[i+1] + " ";
        }
    }
    return result;
}

bool is_space(const string& s, int i) {
    return (i < s.length() - 1) && s[i] == ' ' && s[i+1] != ' ';
}

bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}