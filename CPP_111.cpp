map<char,int> histogram(string test){
    map<char,int> result;
    if(test.empty()){
        return result;
    }
    string word;
    for(int i=0; i<test.length(); i++){
        if(test[i] == ' '){
            if(result.find(word[0]) == result.end()){
                result[word[0]] = 1;
            }
            else{
                result[word[0]]++;
            }
            word = "";
        }
        else{
            word += test[i];
        }
    }
    if(result.find(word[0]) == result.end()){
        result[word[0]] = 1;
    }
    else{
        result[word[0]]++;
    }
    return result;
}