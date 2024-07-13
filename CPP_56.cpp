int stack_size = 0;
for(int i=0; i<brackets.size(); i++){
    if(brackets[i] == '<'){
        stack_size++;
    }
    else if(brackets[i] == '>'){
        if(stack_size <= 0){
            return false;
        }
        stack_size--;
    }
}
return stack_size == 0;