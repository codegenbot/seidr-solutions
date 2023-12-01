map<char,int> histogram(string test){
    map<char, int> counts;
    string word = "";
    for(int i=0; i<test.size(); i++){
        if(test[i] != ' '){
            word += test[i];
        }
        else{
            if(word != ""){
                counts[word[0]]++;
            }
            word = "";
        }
    }
    if(word != ""){
        counts[word[0]]++;
    }
    return counts;
}