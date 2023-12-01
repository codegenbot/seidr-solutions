int is_bored(string S){
    int boredomCount = 0;
    string delimiter = ".?!";
    size_t pos = 0;
    string token;
    
    while ((pos = S.find(delimiter)) != string::npos) {
        token = S.substr(0, pos);
        if (token.length() > 2 && token[0] == 'I') {
            boredomCount++;
        }
        S.erase(0, pos + delimiter.length());
    }
    
    return boredomCount;
}