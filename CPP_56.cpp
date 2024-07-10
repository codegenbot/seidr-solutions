int i = 0, count = 0;
while(i < brackets.length()){
    if(brackets[i] == '<'){
        count++;
    }
    else{
        if(count > 0){
            count--;
        }
        else{
            return false;
        }
    }
    i++;
}
return (count == 0);