int starts_one_ends(int n){
    int count = 0;
    if(n == 1){
        count = 1;
    }
    else{
        count = 2 * pow(10, n-2);
    }
    return count;
}