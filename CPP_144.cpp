bool simplify(string x, string n){
    int numerator_x, denominator_x, numerator_n, denominator_n;
    sscanf(x.c_str(), "%d/%d", &numerator_x, &denominator_x);
    sscanf(n.c_str(), "%d/%d", &numerator_n, &denominator_n);

    double result = (double)numerator_x / denominator_x * (double)numerator_n / denominator_n;

    return (result == (int)result);
}