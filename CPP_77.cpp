bool iscuber(int a){
    int cubeRoot = round(cbrt(abs(a)));
    return cubeRoot * cubeRoot * cubeRoot == abs(a);
}