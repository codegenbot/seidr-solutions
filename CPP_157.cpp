// Sort the sides of the triangle in ascending order
    if (c > a && c > b) {
        swap(c, a);
        swap(c, b);
    } else if (b > a) {
        swap(b, a);
    }
    
    return a * a + b * b == c * c;
}