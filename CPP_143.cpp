string words_in_sentence(string sentence){
    vector<string> words;
    int len = 0;
    for(int i = 0; i < sentence.length(); i++){
        if(sentence[i] == ' ' || i == sentence.length() - 1){
            string word = sentence.substr(len, i - len);
            bool is_prime = true;
            for(int j = 2; j * j <= stoi(word); j++)
                if(stoi(word) % j == 0)
                    is_prime = false;
            if(is_prime)
                words.push_back(word);
            len = i + 1;
        }
    }
    string result = "";
    for(auto word : words)
        result += word + " ";
    return result.substr(0, result.length() - 1);
}