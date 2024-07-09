double find_zero(vector<double> x, vector<double> c){
    double result = 0;
    int n = x.size();
    for(int i=2; i<n; i++){
        if(c[i] != 0)
            return 0;
    }
    if(n > 1) {
        result = -c[1]/c[0];
    } else {
        result = -c[0];
    }
    return result;
}