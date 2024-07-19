Here is the completed code:

bool iscuber(int a){
    double c = cbrt(a);
    return c == round(c);
}