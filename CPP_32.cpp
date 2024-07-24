double find_zero(vector<double> xs){
    int n = xs.size();
    if(n%2!=0) return -1; //no solution exists for odd degree polynomial
    double x=-xs[n-1]/(xs[0]*n);
    return x;
}