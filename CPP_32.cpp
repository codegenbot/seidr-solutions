```
vector<double> coeffs;
double find_zero(vector<double> xs){
    double x = -xs[1]/(2*xs[0]);
    vector<double> coeffs({-x,1});
    return poly(coeffs,x) == 0 ? x : 0;
}

double poly(vector<double> coeffs,double x){
    double res = 0.0;
    for(int i=0; i<coeffs.size(); i++){
        res += coeffs[i]*pow(x,i);
    }
    return res;
}