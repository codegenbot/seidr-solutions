string words_in_sentence(string sentence){
    string result = "";
    for(auto word : split(sentence, " ")){
        if(is_prime(word.length())){
            result += word + " ";
        }
    }
    return result.substr(0, result.size() - 1);
}

bool is_prime(int num) {
    if(num <= 1)
        return false;
    for(int i = 2; i*i <= num; i++) {
        if(num % i == 0)
            return false;
    }
    return true;
}

vector<string> split(string sentence, string delimiter) {
    vector<string> result;
    size_t pos = 0;
    while((pos = sentence.find(delimiter)) != string::npos) {
        result.push_back(sentence.substr(0, pos));
        sentence.erase(0, pos + delimiter.length());
    }
    if (!sentence.empty())
        result.push_back(sentence);
    return result;
}