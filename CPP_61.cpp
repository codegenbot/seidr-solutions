int count = 0;
for(int i=0; i<brackets.size(); i++){
    if(brackets[i] == '(')count++;
    else if(brackets[i] == ')')if(count > 0)count--;else return false;
}
return count == 0;