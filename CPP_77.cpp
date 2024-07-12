bool iscuber(int a){
    int c = round(cbrt(a));
    if (c*c*c == a) return true;
    else return false;
}