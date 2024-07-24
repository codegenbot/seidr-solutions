Here is the completed code:

bool iscuber(int a){
    int i = (int)round(cbrt(a));
    return pow(i, 3) == a;
}