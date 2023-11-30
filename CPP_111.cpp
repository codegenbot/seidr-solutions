map<char,int> histogram(string test){
    map<char,int> result;
    string word;
    for(int i=0; i<test.length(); i++){
        if(test[i] != ' '){
            word += test[i];
        }
        else{
            if(result.find(word[0]) == result.end()){
                result[word[0]] = 1;
            }
            else{
                result[word[0]]++;
            }
            word = "";
        }
    }
    if(word != ""){
        if(result.find(word[0]) == result.end()){
            result[word[0]] = 1;
        }
        else{
            result[word[0]]++;
        }
    }
    return result;
}