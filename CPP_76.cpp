bool isSimplePower(int x, int n){
    double y = pow(n, ceil(log2(x)));
    if(y == x) return true;
    else return false;
}