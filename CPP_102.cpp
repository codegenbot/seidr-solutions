int choose_num(int x, int y) {
    if (x > y) return -1;
    if (y % 2 != 0) y--;  // Make y even if it's odd
    if (x % 2 != 0) x++;  // Make x even if it's odd to ensure we can have an even y
    if (y >= x) return y;
    return -1;
}