map<char,int> histogram(string test){
    map<char,int> result;
    string letter;
    int count = 0;
    
    for(int i=0; i<test.length(); i++){
        if(test[i] != ' '){
            letter += test[i];
        }
        else{
            if(letter != ""){
                result[letter[0]]++;
                if(result[letter[0]] > count){
                    count = result[letter[0]];
                }
                letter = "";
            }
        }
    }
    
    if(letter != ""){
        result[letter[0]]++;
        if(result[letter[0]] > count){
            count = result[letter[0]];
        }
    }
    
    map<char,int> maxCountLetters;
    
    for(auto it=result.begin(); it!=result.end(); it++){
        if(it->second == count){
            maxCountLetters[it->first] = it->second;
        }
    }
    
    return maxCountLetters;
}