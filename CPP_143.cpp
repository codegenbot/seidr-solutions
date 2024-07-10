string words_in_sentence(string sentence){
    string result = "";
    int word_count = 0;

    for(int i=0; i<sentence.length(); i++){
        if(sentence[i] == ' ' || i==sentence.length()-1){
            string word = sentence.substr(word_count, i-word_count);
            word_count = i+1;
            bool is_prime = false;

            for(long long j=2; !is_prime && j*j<=stoi(word); j++){
                if(stoi(word)%j == 0)
                    is_prime = true;
            }

            if(is_prime)
                result += word + " ";
        }
    }

    return result.substr(0, result.length()-1);
}