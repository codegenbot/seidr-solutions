bool iscuber(int a){
    int cubeRoot = round(cbrt(a));
    return pow(cubeRoot, 3) == a;
}