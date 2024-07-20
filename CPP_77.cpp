bool iscuber(int a){
    int n = cbrt(a);
    return (n*n*n) == a;
}