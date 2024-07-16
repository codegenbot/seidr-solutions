double cube_root = cbrt(a);
    int cube_root_rounded = round(cube_root);
    return cube_root_rounded * cube_root_rounded * cube_root_rounded == a;
}