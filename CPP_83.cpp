int starts_one_ends(int n){
    int count = 0;
    for(int i = 0; i < 10; i++){
        if(i == 1 || (n > 1 && i == 0)){
            count += pow(10, n-1);
        }
    }
    return count;
}