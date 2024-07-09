float hypo = max(max(a, b), c);
    float sum_squares = (a * a) + (b * b) + (c * c) - (hypo * hypo);
    return sum_squares == (hypo * hypo);
}