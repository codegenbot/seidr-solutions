string words_in_sentence(string sentence){
    string result = "";
    int n = sentence.length();
    for(int i=0; i<n;){
        int j = i;
        while(j<n && sentence[j] != ' '){
            j++;
        }
        int word_len = j - i;
        bool is_prime = true;
        for(int k=2; k*k<=word_len; k++){
            if(word_len % k == 0){
                is_prime = false;
                break;
            }
        }
        if(is_prime && word_len > 1){
            result += sentence.substr(i, word_len) + " ";
        }
        i = j + 1;
    }
    if(result.length() > 0){
        result.pop_back(); //remove the extra space at the end
    }
    return result;
}