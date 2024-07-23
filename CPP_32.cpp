double find_zero(vector<double> xs){
    double a = xs[0];
    double b = 0;
    for(int i=1; i<xs.size();i++){
        if(i%2==0) b+=xs[i]*pow(xs.back(),(i-1)/2);
        else a+=(-1)*xs[i]/(double)(i)*(pow(xs.back(),(i-1)/2));
    }
    return -b/(2*a);
}