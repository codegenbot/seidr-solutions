int stack = 0;
for(int i=0; i<brackets.length(); i++){
    if(brackets[i] == '<'){
        stack++;
    } else {
        if(stack <= 0) return false;
        stack--;
    }
}
return stack == 0;