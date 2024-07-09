```cpp
double find_zero(vector<double> xs){
    vector<vector<double>> poly;
    vector<double> coeff;
    for (int i = 1; i < xs.size(); i += 2) {
        double x = xs[i];
        int power = (i - 1) / 2;
        if (poly.size() <= power) {
            poly.resize(power + 1);
        }
        poly[power].push_back(x);
    }
    for (int i = 0; i < poly.size(); i++) {
        coeff.insert(coeff.begin(), 0);
        for (int j = 0; j <= i; j++) {
            if (j < poly[i].size()) {
                coeff[0] -= poly[i][j];
            }
        }
    }
    return -coeff[0] / xs[0];
}