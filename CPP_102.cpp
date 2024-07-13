int choose_num(int x, int y) {
    if (x % 2 == 0 && y % 2 == 0) {
        return max(x, y);
    } else if ((x % 2 != 0 && y % 2 == 0) || (x % 2 == 0 && y % 2 != 0)) {
        return -1;
    } else if (x % 2 != 0 && y % 2 != 0) {
        int maxEven = (y > x) ? y : x;
        while (maxEven % 2 != 0) {
            maxEven--;
        }
        return maxEven;
    }
    return -1;
}