map<char, int> histogram(string test){
    map<char, int> result;
    string letter;
    int count = 0;
    
    for(char c : test){
        if(c == ' '){
            if(letter != ""){
                result[letter[0]] = count;
                letter = "";
                count = 0;
            }
        }
        else{
            letter += c;
            count++;
        }
    }
    
    if(letter != ""){
        result[letter[0]] = count;
    }
    
    return result;
}