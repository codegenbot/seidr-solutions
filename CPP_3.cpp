int sum = 0;
for(int i = 0; i < operations.size(); i++){
    sum += operations[i];
    if(sum < 0){
        return true;
    }
}
return false;
}