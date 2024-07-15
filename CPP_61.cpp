int count = 0;
for(int i=0; i<brackets.length(); i++){
    if(brackets[i] == '(') count++;
    else count--;
    if(count < 0) return false;
}
return count == 0;
}