map<char,int> histogram(string test){
    map<char,int> result;
    if(test.empty()){
        return result;
    }
    string letter;
    for(int i=0; i<test.size(); i++){
        if(test[i] != ' '){
            letter += test[i];
        }
        else{
            result[letter]++;
            letter = "";
        }
    }
    result[letter]++;
    return result;
}