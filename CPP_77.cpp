bool iscuber(int a){
    int cube = cbrt(a);
    return (cube * cube * cube == a);
}