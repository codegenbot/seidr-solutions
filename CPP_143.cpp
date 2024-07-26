string result = "";
    string word = "";
    int n = sentence.length();
    
    for(int i=0; i<n; i++){
        if(sentence[i] == ' ' || i == n-1){
            if(i == n-1) word += sentence[i];
            int word_len = word.length();
            bool is_prime = true;
            for(int j=2; j*j<=word_len; j++){
                if(word_len % j == 0){
                    is_prime = false;
                    break;
                }
            }
            if(is_prime && word_len > 1){
                if(result != "") result += " ";
                result += word;
            }
            word = "";
        } else {
            word += sentence[i];
        }
    }
    
    return result;
}