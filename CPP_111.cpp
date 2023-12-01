map<char,int> histogram(string test){
    map<char,int> result;
    string letter;
    for(int i=0; i<test.length(); i++){
        if(test[i] != ' '){
            letter += test[i];
            if(i == test.length()-1 || test[i+1] == ' '){
                result[letter[0]]++;
                letter = "";
            }
        }
    }
    return result;
}