string words_in_sentence(string sentence){
    string result = "";
    int prime_count = 0;
    for(int i=2; i<=sentence.size(); i++){
        bool is_prime = true;
        if(i==2 || i==3) is_prime=true;
        else{
            for(int j=2; j*j<=i; j++){
                if(i%j == 0) {is_prime=false;break;}
            }
        }
        if(is_prime){
            result += sentence.substr(0, i+1) + " ";
            prime_count++;
            sentence = sentence.substr(i+1);
        }
    }
    return result;
}