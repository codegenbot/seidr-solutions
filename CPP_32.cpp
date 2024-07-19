std::vector<double> coeffs;
double coeff;
while (std::cin >> coeff) {
    coeffs.push_back(coeff);
}

std::vector<double> solution = find_zero(coeffs);