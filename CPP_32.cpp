double poly(vector<double> xs, int n){
    double sum = xs[0];
    for(int i = 1; i < n; i++){
        sum += xs[i] * pow(-1, i) / fact(i);
    }
    return sum;
}

int fact(int n){
    if(n > 1) return n * fact(n-1);
    else return 1;
}