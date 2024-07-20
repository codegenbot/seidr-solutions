float max_side = max(a, max(b, c));
    float sum_of_squares = a*a + b*b + c*c - max_side*max_side;
    return sum_of_squares == max_side*max_side;
}