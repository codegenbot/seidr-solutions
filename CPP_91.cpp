int is_bored(string S){
    int count = 0;
    string delimiter = ".?!";
    size_t pos = 0;
    
    while ((pos = S.find(delimiter, pos)) != string::npos) {
        string sentence = S.substr(0, pos);
        if (sentence[0] == 'I') {
            count++;
        }
        S.erase(0, pos + 1);
    }
    
    return count;
}