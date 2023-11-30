map<char,int> histogram(string test){
    map<char,int> result;
    string word;
    for(int i=0; i<test.length(); i++){
        if(test[i] != ' '){
            word += test[i];
        }
        else{
            if(word != ""){
                result[word]++;
                word = "";
            }
        }
    }
    if(word != ""){
        result[word]++;
    }
    return result;
}