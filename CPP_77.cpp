Here is the completed code:

bool iscuber(int a){
    int c = (int)cbrt(a);
    return c*c*c == a;
}