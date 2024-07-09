string words_in_sentence(string sentence){
    string result = "";
    for(int i=0; i<sentence.size();i++){
        if(sentence[i] == ' '){
            continue;
        }
        int length = 0;
        while(i < sentence.size() && sentence[i] != ' '){
            i++;
            length++;
        }
        string word = sentence.substr(0, length);
        bool is_prime = true;
        for(int j=2; j*j <= length; j++){
            if(length % j == 0){
                is_prime = false;
                break;
            }
        }
        if(is_prime) result += word + " ";
    }
    return result.substr(0, result.size()-1);
}