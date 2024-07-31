bool correct_bracketing(string brackets){
    int balance = 0;
    for(auto bracket : brackets){
        if(bracket == '('){
            balance++;
        } else {
            balance--;
        }
        if(balance < 0){
            return false;
        }
    }
    return balance == 0;
}