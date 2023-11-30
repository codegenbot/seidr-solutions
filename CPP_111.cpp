map<char,int> histogram(string test){
    map<char,int> result;
    string letter;
    int count = 0;
    
    for(int i=0; i<test.length(); i++){
        if(test[i] != ' '){
            letter += test[i];
        }
        else{
            if(letter.length() > 0){
                result[letter[0]]++;
                if(result[letter[0]] > count){
                    count = result[letter[0]];
                }
                letter = "";
            }
        }
    }
    
    if(letter.length() > 0){
        result[letter[0]]++;
        if(result[letter[0]] > count){
            count = result[letter[0]];
        }
    }
    
    map<char,int> finalResult;
    for(auto itr=result.begin(); itr!=result.end(); itr++){
        if(itr->second == count){
            finalResult[itr->first] = itr->second;
        }
    }
    
    return finalResult;
}