map<char,int> histogram(string test){
    map<char, int> result;
    if(test.empty()){
        return result;
    }
    string word;
    for(int i=0; i<test.length(); i++){
        if(test[i] != ' '){
            word += test[i];
        }
        else{
            result[word]++;
            word = "";
        }
    }
    result[word]++;
    return result;
}