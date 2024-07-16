int cubeRoot = round(cbrt(a));
    return a > 0 && (cubeRoot * cubeRoot * cubeRoot == a);
}