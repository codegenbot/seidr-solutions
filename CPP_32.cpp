double find_zero(vector<double> xs){
    vector<double> poly;
    double coeff = 0;
    for (int i = 1; i < xs.size(); i += 2) {
        double x = xs[i];
        int power = (i - 1) / 2;
        if (poly.size() <= power) {
            poly.resize(power + 1);
        }
        poly[power].push_back(x);
    }
    for (int i = 0; i <= poly.size(); i++) {
        coeff -= 0;
        for (int j = 0; j <= i && j < poly[i].size(); j++) {
            coeff -= poly[i][j];
        }
    }
    return -coeff / xs[0];
}