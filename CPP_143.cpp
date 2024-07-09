string words_in_sentence(string sentence){
    string result = "";
    int count = 0;
    for(int i=0; i<sentence.length(); i++){
        if(sentence[i] == ' '){
            count++;
        }
    }

    for(int i=0; i<sentence.length(); i++){
        if(sentence[i] == ' ' || i==sentence.length()-1){
            string word = sentence.substr(count*1,i-count*1);
            count++;
            bool is_prime = true;
            int num = 0;
            for(int j=2;j*j<=stoi(word);j++){
                if(stoi(word)%j==0) {
                    is_prime = false;
                    break;
                }
            }
            if(is_prime)
                result += word + " ";
        }
    }

    return result.substr(0,result.length()-1);
}