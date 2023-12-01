map<char,int> histogram(string test){
    map<char, int> countMap;
    string word;
    for(int i=0; i<test.length(); i++){
        if(test[i] != ' '){
            word += test[i];
        }
        else{
            if(word.length() > 0){
                countMap[word[0]]++;
                word = "";
            }
        }
    }
    if(word.length() > 0){
        countMap[word[0]]++;
    }
    return countMap;
}