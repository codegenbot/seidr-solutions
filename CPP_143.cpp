string words_in_sentence(string sentence){
    string result = "";
    int len = 0;
    for(int i=2; i<=100; i++){
        if(isPrime(i)){
            len = i;
            break;
        }
    }
    vector<string> words;
    split(sentence, " ", words);
    for(auto word : words){
        if(word.length() == len){
            result += word + " ";
        }
    }
    return result.substr(0, result.size()-1);
}

bool isPrime(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

void split(const string& str, char c, vector<string>& result) {
    size_t pos = 0;
    while ((pos = str.find(c)) != string::npos) {
        result.push_back(str.substr(0, pos));
        str.erase(0, pos + 1);
    }
    result.push_back(str);
}