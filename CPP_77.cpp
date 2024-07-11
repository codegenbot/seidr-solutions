int root = cbrt(abs(a));
    return a == 0 || (a > 0 && a == root * root * root);
}