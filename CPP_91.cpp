int is_bored(string S){
    int count = 0;
    size_t pos = 0;
    while((pos = S.find("I", pos)) != string::npos) {
        if (S[pos] == ' ' || S[pos+1] == '.') 
            count++;
        pos += 2; // skip " I" or " I "
    }
    return count;
}