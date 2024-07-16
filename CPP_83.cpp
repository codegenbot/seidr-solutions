int starts_one_ends(int n){
    return n == 1 ? 1 : 2 * 9 * (int)pow(10, n - 2);
}