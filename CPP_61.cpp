int count = 0;

for(char bracket : brackets){
    if(bracket == '(') count++;
    else if(count > 0) count--;
}

return count == 0;