bool iscuber(int a){
    int i = cbrt(a);
    return i * i * i == a;
}