string words_in_sentence(string sentence){
        string result = "";
        int primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37}; // prime numbers up to 37

        string word = "";
        for (char c : sentence){
            if (c != ' '){
                word += c;
            } else {
                if (word != ""){
                    int word_length = word.length();
                    bool is_prime = false;
                    for (int prime : primes){
                        if (word_length == prime){
                            is_prime = true;
                            break;
                        }
                    }
                    if (is_prime){
                        if (result != ""){
                            result += " ";
                        }
                        result += word;
                    }
                    word = "";
                }
            }
        }

        if (word != ""){
            int word_length = word.length();
            bool is_prime = false;
            for (int prime : primes){
                if (word_length == prime){
                    is_prime = true;
                    break;
                }
            }
            if (is_prime){
                if (result != ""){
                    result += " ";
                }
                result += word;
            }
        }

        return result;
    }