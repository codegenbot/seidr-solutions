int stack_size = 0;
for(char c : brackets){
    if(c == '<'){
        stack_size++;
    } else {
        if(stack_size <= 0) return false;
        stack_size--;
    }
}
return stack_size == 0;