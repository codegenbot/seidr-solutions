string words_in_sentence(string sentence){
    string result = "";
    string word = "";
    int n = sentence.length();
    bool is_prime[101] = {false};
    is_prime[2] = is_prime[3] = is_prime[5] = is_prime[7] = is_prime[11] = is_prime[13] = true;

    for(int i = 0; i < n; i++){
        if(sentence[i] != ' '){
            word += sentence[i];
        }
        if(sentence[i] == ' ' || i == n - 1){
            if(is_prime[word.length()]){
                result += word + " ";
            }
            word = "";
        }
    }

    return result.substr(0, result.length() - 1);
}