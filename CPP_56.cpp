int stackSize = 0;
for(int i = 0; i < brackets.length(); i++) {
    if(brackets[i] == '<') {
        stackSize++;
    } else if(brackets[i] == '>') {
        if(stackSize <= 0) return false;
        stackSize--;
    }
}
return stackSize == 0;