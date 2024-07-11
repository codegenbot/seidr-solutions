string words_in_sentence(string sentence){
    string result = "";
    int len = 0;
    for(int i=2; i<=len(sentence);i++){
        if(isPrime(i)){
            len = 0;
            for(auto w : split(sentence, " "))
                if(w.length() == i) result += w + " ";
        }
    }
    return result.substr(0,result.size()-1);
}

bool isPrime(int n){
    if(n <= 1) return false;
    for(int i=2; i*i<=n; i++)
        if(n%i==0) return false;
    return true;
}

vector<string> split(string s, string delimiter){
    vector<string> result;
    size_t pos = 0;
    while((pos = s.find(delimiter)) != string::npos){
        result.push_back(s.substr(0,pos));
        s.erase(0, pos + delimiter.length());
    }
    result.push_back(s);
    return result;
}