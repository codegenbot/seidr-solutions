string solve(string s){
    string result = "";
    bool hasLetter = false;
    for(char c : s){
        if(isalpha(c)){
            hasLetter = true;
            result += islower(c) ? toupper(c) : tolower(c);
        }
        else{
            result += c;
        }
    }
    if(!hasLetter){
        reverse(result.begin(), result.end());
    }
    return result;
}