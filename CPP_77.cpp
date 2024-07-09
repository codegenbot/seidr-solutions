Here is the completed code:

bool iscuber(int a){
    int c = (int)round(cbrt(a));
    return c*c*c == a;
}