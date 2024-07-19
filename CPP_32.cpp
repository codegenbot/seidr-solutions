double find_zero(vector<double> coeffs, vector<double> poly){
    double sum = 0;
    for (int i = 2; i < poly.size(); i += 2) {
        sum -= coeffs[i/2] * pow(poly[1],i) / (pow(poly[1],i+1));
    }
    return -sum / pow(poly[1],2);
}