bool iscuber(int a) {
    int cubeRoot = cbrt(a);
    int cube = pow(cubeRoot, 3);
    return (cube == a);
}