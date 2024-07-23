bool valid = false;
for(int i=0; i<brackets.length(); i++){
    if(brackets[i] == '(')count++;
    else if(brackets[i] == ')')count--;
    else invalid = true;
}
return (count==0 && !invalid);