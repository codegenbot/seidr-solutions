bool correct_bracketing(string brackets){
    int opening = 0;
    for(int i=0; i<brackets.length(); i++){
        if(brackets[i] == '<') {
            opening++;
        }
        else if(brackets[i] == '>'){
            if(opening == 0) return false;
            opening--;
        }
    }
    return opening == 0;
}