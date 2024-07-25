string words_in_sentence(string sentence){
    string result = "";
    int len = sentence.length();
    int primes[26] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101};

    int start = 0;
    for (int i = 0; i <= len; i++){
        if (i == len || sentence[i] == ' '){
            string word = sentence.substr(start, i - start);
            if (word.length() > 0){
                int wordLen = word.length();
                bool isPrime = false;
                for (int j = 0; j < 26; j++){
                    if (primes[j] == wordLen){
                        isPrime = true;
                        break;
                    }
                }
                if (isPrime){
                    result += word + " ";
                }
            }
            start = i + 1;
        }
    }

    if (!result.empty()){
        result.pop_back(); // Remove the last space
    }

    return result;
}