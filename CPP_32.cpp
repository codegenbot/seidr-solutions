std::vector<double> coeffs; 

double coeff; 
int n;
std::cout << "Enter the number of coefficients: ";
std::cin >> n;

coeffs.resize(n);

for (int i = 0; i < n; ++i) {
    std::cout << "Enter coefficient " << i+1 << ": ";
    std::cin >> coeff;
    coeffs[i] = coeff;
}

double solution = find_zero(coeffs); 
assert(abs(poly(coeffs, solution)) < 1e-3); 
return 0;