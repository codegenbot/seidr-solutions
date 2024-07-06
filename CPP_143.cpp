string words_in_sentence(string sentence){
    string result = "";
    int count = 0;
    for(int i = 0; i < sentence.size(); i++){
        if(sentence[i] == ' ' || i == sentence.size() - 1){
            string word = sentence.substr(count, i - count);
            bool is_prime = true;
            for(int j = 2; j * j <=stoi(word); j++)
                if(stoi(word) % j == 0)
                    is_prime = false;
            if(is_prime && !word.empty())
                result += word + " ";
            count = i + 1;
        }
    }
    return result.substr(0, result.size() - 1);
}