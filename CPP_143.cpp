string words_in_sentence(string sentence){
    string result = "";
    int len = sentence.length();
    int word_start = 0;
    for (int i = 0; i <= len; i++){
        if (i == len || sentence[i] == ' '){
            string word = sentence.substr(word_start, i - word_start);
            int word_len = word.length();
            bool is_prime = true;
            for (int j = 2; j*j <= word_len; j++){
                if (word_len % j == 0){
                    is_prime = false;
                    break;
                }
            }
            if (word_len > 1 && is_prime){
                result += word + " ";
            }
            word_start = i + 1;
        }
    }
    if (!result.empty()){
        result.pop_back(); // remove extra space at the end
    }
    return result;
}