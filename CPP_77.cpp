bool iscuber(int a){
    int root = cbrt(a);
    return (a >= 0 && root == static_cast<int>(root));
}