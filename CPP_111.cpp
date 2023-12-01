map<char,int> histogram(string test){
    map<char, int> countMap;
    string letter;
    for(int i=0; i<test.length(); i++){
        if(test[i] != ' '){
            letter += test[i];
        }
        else{
            if(countMap.find(letter[0]) == countMap.end()){
                countMap[letter[0]] = 1;
            }
            else{
                countMap[letter[0]]++;
            }
            letter = "";
        }
    }
    if(letter != ""){
        if(countMap.find(letter[0]) == countMap.end()){
            countMap[letter[0]] = 1;
        }
        else{
            countMap[letter[0]]++;
        }
    }
    return countMap;
}