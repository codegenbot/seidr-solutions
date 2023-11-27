bool any_int(float a, float b, float c) {
    int x = a;
    int y = b;
    int z = c;
    
    if ((x == y + z) || (y == x + z) || (z == x + y)) {
        return true;
    } else {
        return false;
    }
}