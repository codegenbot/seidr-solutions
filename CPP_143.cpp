string words_in_sentence(string sentence){
    vector<string> words = split(sentence, ' ');
    string result = "";
    for(auto word : words){
        if(is_prime(word.length())){
            result += word + " ";
        }
    }
    return result.substr(0, result.length()-1);
}

bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}