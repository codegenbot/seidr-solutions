```
#include <vector>
#include <cmath>

double poly(vector<double> coeffs, double x) {
    double result = 0;
    for(int i=0; i<coeffs.size(); i++) {
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

double find_zero(vector<double> xs){
    if(xs.size() % 2 != 0) return -1; 
    vector<double> coeffs = {(double)xs.size(), 0};
    double root = -xs[1]/(2*xs[0]);
    return std::round(poly(coeffs, root));
}

int main() {
    vector<double> xs;
    int n;
    cin >> n;
    for(int i=0; i<n; i++) {
        double x;
        cin >> x;
        xs.push_back(x);
    }
    double solution = find_zero(xs);
    cout << solution << endl;
    return 0;
}