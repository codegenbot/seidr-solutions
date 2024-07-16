string words_in_sentence(string sentence){
    string result = "";
    int primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37};
    
    string word = "";
    for(char c : sentence){
        if(c == ' '){
            if(word != ""){
                int len = word.length();
                bool is_prime = false;
                for(int prime : primes){
                    if(len == prime){
                        is_prime = true;
                        break;
                    }
                }
                if(is_prime){
                    result += word + " ";
                }
            }
            word = "";
        } else {
            word += c;
        }
    }
    
    if(word != ""){
        int len = word.length();
        bool is_prime = false;
        for(int prime : primes){
            if(len == prime){
                is_prime = true;
                break;
            }
        }
        if(is_prime){
            result += word + " ";
        }
    }
    
    if(result.length() > 0){
        result.pop_back(); // Remove the extra space at the end
    }
    
    return result;
}