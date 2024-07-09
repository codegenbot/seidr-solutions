string words_in_sentence(string sentence){
    string result = "";
    for(int i=0; i<sentence.length(); i++){
        if(i == 0 || sentence[i-1] == ' '){
            string word = "";
            int j=i;
            while(j < sentence.length() && sentence[j] != ' '){
                word += sentence[j];
                j++;
            }
            if(is_prime(word.length())){
                result += word + " ";
            }
        }
    }
    return result.substr(0, result.length()-1);
}

bool is_prime(int n) {
    if(n <= 1)
        return false;
    for(int i=2; i*i<=n; i++){
        if(n%i == 0)
            return false;
    }
    return true;
}