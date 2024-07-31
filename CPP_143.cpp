string words_in_sentence(string sentence){
    string result = "";
    int primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
    string word = "";
    for (char c : sentence){
        if (c != ' '){
            word += c;
        }
        else{
            if (word.size() > 0){
                int len = word.size();
                bool is_prime = false;
                for (int prime : primes){
                    if (len == prime){
                        is_prime = true;
                        break;
                    }
                }
                if (is_prime){
                    result += word + " ";
                }
                word = "";
            }
        }
    }
    if (word.size() > 0){
        int len = word.size();
        bool is_prime = false;
        for (int prime : primes){
            if (len == prime){
                is_prime = true;
                break;
            }
        }
        if (is_prime){
            result += word;
        }
    }
    return result;
}