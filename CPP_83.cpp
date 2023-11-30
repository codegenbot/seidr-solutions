int starts_one_ends(int n){
    int count = 0;
    if(n == 1){
        count = 1;
    }
    else{
        count = 2 * (n - 1);
    }
    return count;
}