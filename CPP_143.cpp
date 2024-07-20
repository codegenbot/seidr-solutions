Here is the solution:

string words_in_sentence(string sentence){
    string result = "";
    for(int i=0; i<sentence.size(); i++){
        int len = 1;
        for(int j=i+1; j<=sentence.size(); j++){
            if(j == sentence.size() || sentence[j] != ' ') {
                len++;
                break;
            }
        }
        string word = sentence.substr(i, len);
        bool is_prime = true;
        for(int j=2; j*j <= len; j++){
            if(len % j == 0){
                is_prime = false;
                break;
            }
        }
        if(is_prime) result += word + " ";
    }
    return result;
}