bool iscuber(int a){
    int c = (int)cbrt(a);
    return a == pow(c, 3);
}