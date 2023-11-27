map<char,int> histogram(string test){
    map<char, int> result;
    string letter;
    int count = 0;
    for(int i=0; i<test.length(); i++){
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