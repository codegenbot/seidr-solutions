int is_bored(string S){
    int count = 0;
    string word;
    stringstream ss(S);
    
    while (getline(ss, word, '.')) {
        if (word.substr(0, 2) == "I ") {
            count++;
        }
    }

    return count;
}