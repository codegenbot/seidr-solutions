int is_bored(string S){
    int count = 0;
    string boredom = "I";
    size_t found;

    for(size_t i=0; i<S.length(); i++){
        if(S[i] == '.' || S[i] == '?' || S[i] == '!'){
            found = S.find(boredom, i+1);
            if(found != string::npos){
                count++;
                i = found + boredom.length() - 1;
            }
        }
    }

    return count;
}