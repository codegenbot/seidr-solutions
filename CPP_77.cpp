bool iscuber(int a){
    int n = cbrt(a);
    return a == pow(n, 3);
}