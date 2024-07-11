string words_in_sentence(string sentence){
    string result = "";
    for(auto word : split(sentence, " ")) {
        int len = word.length();
        bool isPrime = true;
        if(len > 1) {
            for(int i = 2; i * i <= len; i++) {
                if(len % i == 0) {
                    isPrime = false;
                    break;
                }
            }
            if(isPrime)
                result += word + " ";
        }
    }
    return result.substr(0, result.length() - 1);
}

string split(string sentence, string delimiter){
    size_t pos = 0;
    vector<string> tokens;
    while((pos = sentence.find(delimiter)) != 0) {
        tokens.push_back(sentence.substr(0, pos));
        sentence.erase(0, pos + delimiter.size());
    }
    tokens.push_back(sentence);
    return join(tokens, " ");
}

string join(vector<string> tokens, string delimiter){
    string result;
    for(auto token : tokens) {
        result += token + delimiter;
    }
    if(!delimiter.empty())
        result.pop_back();
    return result;
}