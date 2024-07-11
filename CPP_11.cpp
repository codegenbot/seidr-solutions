int calculateArea(int r1, int g1, int b1, int r2, int g2, int b2) {
    int red = abs(r1 - r2);
    int green = abs(g1 - g2);
    int blue = abs(b1 - b2);

    return 255 * (red + green + blue);
}