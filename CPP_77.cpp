Here is the completed code:

bool iscuber(int a){
    return round(cbrt(a)) * round(cbrt(a)) == a;
}