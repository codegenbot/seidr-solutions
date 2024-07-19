bool iscuber(int a){
    int i = cbrt(a);
    return (a == round(pow(i, 3)));
}