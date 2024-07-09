Here is the completed code:

bool iscuber(int a){
    double c = pow(a, 1.0/3);
    return floor(c + 0.5) == round(c);
}