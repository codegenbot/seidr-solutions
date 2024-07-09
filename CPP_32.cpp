double find_zero(vector<double> coeffs){
    double sum = 0;
    vector<double> ncoeffs; 
    for (int i = 1; i < coeffs.size(); i += 2) {
        ncoeffs.push_back(coeffs[i] / coeffs[0]);
    }
    return -sum / coeffs[0];
}