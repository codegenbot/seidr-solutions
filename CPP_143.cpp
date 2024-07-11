string words_in_sentence(string sentence){
    string result = "";
    int len = 0;

    for(int i = 0; i < sentence.length(); i++){
        if(sentence[i] == ' '){
            continue;
        }
        bool is_prime = false;
        for(int j = 2; j * j <= len + 1; j++){
            if((len + 1) % j == 0){
                is_prime = true;
                break;
            }
        }
        if(!is_prime || len == 0){
            result += sentence.substr(i, len + 1) + " ";
        }
        len++;
    }

    return result;
}