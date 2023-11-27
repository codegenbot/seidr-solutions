bool iscuber(int a){
    int cubeRoot = cbrt(a);
    return (cubeRoot * cubeRoot * cubeRoot == a);
}