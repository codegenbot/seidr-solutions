string words_in_sentence(string sentence){
    vector<string> words;
    string word;
    for(int i = 0; i < sentence.length(); i++){
        if(sentence[i] == ' ' || i == sentence.length() - 1){
            if(i != sentence.length() - 1)word += ' ';
            words.push_back(word);
            word = "";
        }else{
            word += sentence[i];
        }
    }

    string result;
    for(auto w : words){
        int len = w.length();
        bool is_prime = true;
        for(int i = 2; i * i <= len; i++){
            if(len % i == 0){
                is_prime = false;
                break;
            }
        }
        if(is_prime)result += w + " ";
    }

    return result.substr(0, result.length() - 1);
}