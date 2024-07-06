Here is the completed code:

bool iscuber(int a){
    int root = round(cbrt(a));
    return pow(root, 3) == a;
}