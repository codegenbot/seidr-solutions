string words_in_sentence(string sentence){
    string result = "";
    int len = 0;
    for(int i=2; ;i++){
        bool isPrime = true;
        for(int j=2; j*j<=i; j++)
            if(i%j==0) {isPrime = false;break;}
        if(isPrime){
            len = i;
            break;
        }
    }
    vector<string> words;
    string word;
    for(char c : sentence + " "){
        if(c == ' '){
            if(word.length() > 0 && word.length() == len)
                words.push_back(word);
            word = "";
        }else{
            word += c;
        }
    }
    result = "";
    for(string w : words)
        result += w + " ";
    return result.substr(0, result.size()-1);
}