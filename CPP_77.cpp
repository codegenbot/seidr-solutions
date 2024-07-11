int cubeRoot = round(cbrt(abs(a)));
    return (a != 0 && (cubeRoot * cubeRoot * cubeRoot == abs(a))) || a == 0;
}