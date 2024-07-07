int main 
{
    double temp;
    std::vector<double> coeffs;

    for (int i = 0; ; i++) {
        if (i % 2 == 1) break;
        // read input
        std::cin >> temp;
        coeffs.push_back(temp);
   
    double solution = find_zero(coeffs);
    assert (abs(poly(coeffs, solution))< 1e-3);
    return 0;
}