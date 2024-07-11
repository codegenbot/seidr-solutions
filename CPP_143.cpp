string words_in_sentence(string sentence){
    string result = "";
    int primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23};
    vector<int> prime_count;
    
    for(int i=0; i<sentence.length(); i++){
        if(sentence[i] == ' '){
            continue;
        }
        int j = i;
        string word = "";
        
        while(j < sentence.length() && sentence[j] != ' '){
            word += sentence[j];
            j++;
        }
        
        bool is_prime = false;
        for(int k=0; k<9; k++){
            if(atoi(word.c_str()) == primes[k]){
                is_prime = true;
                break;
            }
        }
        
        if(is_prime){
            result += word + " ";
            prime_count.push_back(1);
        } else{
            prime_count.push_back(0);
        }
    }
    
    return result.substr(0, result.length() - 1);
}