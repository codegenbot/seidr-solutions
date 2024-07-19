bool iscuber(int a){
    double c = cbrt(a);
    if(c == (int)c) return true;
    else return false;
}