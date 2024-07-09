double find_zero(vector<double> coeffs){
    double poly = 0;
    for (int i = 2; i < coeffs.size(); i++)
        if (coeffs[i] != 0)
            return -1.0 * pow(-1, (i+1) / 2) * coeffs[i];
    return -1.0 * coeffs[0];
}