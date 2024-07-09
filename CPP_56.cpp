bool correct_bracketing(string brackets){
    int open = 0;
    for(int i=0; i<brackets.length(); i++){
        if(brackets[i] == '<') open++;
        else if(brackets[i] == '>') {
            if(open <= 0) return false;
            open--;
        }
    }
    return open == 0;
}