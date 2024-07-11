string words_in_sentence(string sentence){
    string result = "";
    int i = 0;
    while(i < sentence.size()){
        int j = i+1;
        bool is_prime = true;
        for(int k = 2; k*k <= j; k++){
            if(j % k == 0){
                is_prime = false;
                break;
            }
        }
        if(is_prime) result += (sentence.substr(i, j)).append(" ");
        i = j;
    }
    return result;
}