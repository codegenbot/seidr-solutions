int starts_one_ends(int n){
    if(n == 1)
        return 1;
    return 2 * 9 * pow(10, n-2);
}