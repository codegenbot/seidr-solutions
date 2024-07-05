bool iscuber(int a){
    int cuberoot = round(cbrt(a));
    return cuberoot * cuberoot * cuberoot == a;
}