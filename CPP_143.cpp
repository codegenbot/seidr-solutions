string words_in_sentence(string sentence){
    vector<string> words = split(sentence, ' ');
    string result = "";
    for(int i = 0; i < words.size(); i++){
        if(isPrime(words[i].length())){
            result += words[i] + " ";
        }
    }
    return result.substr(0, result.length() - 1);
}

bool isPrime(int n){
    if(n <= 1) return false;
    for(int i = 2; i*i <= n; i++){
        if(n%i == 0) return false;
    }
    return true;
}

vector<string> split(string str, char ch){
    vector<string> arr;
    string temp = "";
    for(int i = 0; i < str.length(); i++){
        if(str[i] != ch)
            temp += str[i];
        else{
            arr.push_back(temp);
            temp = "";
        }
    }
    arr.push_back(temp);
    return arr;
}