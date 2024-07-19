Here is the completed code:

bool iscuber(int a){
    int x = round(cbrt(a));
    return (x*x*x == a);
}