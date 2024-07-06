bool correct_bracketing(string brackets){
    int count = 0;
    for(char c : brackets){
        if(c == '(')count++;
        else if(c == ')')if(count > 0)count--;else return false;
    }
    return count == 0;
}