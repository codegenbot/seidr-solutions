string words_in_sentence(string sentence){
    string result = "";
    vector<string> words;
    int len;
    for(int i=0; i<sentence.length(); i++){
        if(sentence[i] == ' ' || i==sentence.length()-1){
            if(i!=sentence.length()-1) len=i+1;
            else len=i+1;
            string word = sentence.substr(0, len);
            int p = 1;
            for(int j=2; j<=sqrt(len);j++){
                if(len%j==0)p=len;
                }
            if(p!=len)words.push_back(word);
            sentence.erase(0, len);
        }
    }
    for(string w: words){
        result += w + " ";
    }
    return result.substr(0,result.length()-1);
}