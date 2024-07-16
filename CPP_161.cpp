string solve(string s){
    string result = s;
    bool hasLetter = false;
    
    for(char &c : result){
        if(isalpha(c)){
            hasLetter = true;
            c = islower(c) ? toupper(c) : tolower(c);
        }
    }
    
    if(!hasLetter){
        reverse(result.begin(), result.end());
    }
    
    return result;
}