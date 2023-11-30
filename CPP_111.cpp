map<char,int> histogram(string test){
    map<char, int> counts;
    string letter;
    for (int i = 0; i < test.length(); i++){
        if (test[i] != ' '){
            letter += test[i];
        }
        else{
            counts[letter]++;
            letter = "";
        }
    }
    counts[letter]++;
    return counts;
}