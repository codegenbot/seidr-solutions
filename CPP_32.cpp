```cpp
#include <vector>
#include <cmath>

std::vector<double> coeffs;
double x;

double poly() {
    double result = 0;
    for (int i = 0; i < coeffs.size(); i++) {
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

void find_zero() {
    double root;
    cout << "Enter the coefficients: ";
    cin >> x;
    for (auto &c : coeffs) {
        cin >> c;
    }
    root = -poly() / (coeffs[0] * pow(x, 0));
    cout << "Zero is at: " << root << endl;
}

int main() {
    find_zero();
    return 0;
}