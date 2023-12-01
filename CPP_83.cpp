int starts_one_ends(int n){
    int count = 0;
    for(int i = 1; i <= 9; i++){
        if(i == 1){
            count++;
        }
        for(int j = 1; j <= n-2; j++){
            count += 9;
        }
        if(i == 1){
            count++;
        }
    }
    return count;
}