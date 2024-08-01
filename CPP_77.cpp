Here is the completed code:

bool iscuber(int a){
    int n = round(cbrt(a));
    return a == pow(n, 3);
}