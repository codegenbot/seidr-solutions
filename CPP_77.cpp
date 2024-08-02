Here is the completed code:

bool iscuber(int a){
    double c = cbrt(a);
    return floor(c + 0.5) == c;
}