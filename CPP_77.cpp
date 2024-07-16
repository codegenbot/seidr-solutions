if (a == 0) return true;
    int cube_root = cbrt(abs(a));
    return (a == cube_root * cube_root * cube_root);
}