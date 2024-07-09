double find_zero(vector<double> xs){
    double sum=0;
    int i,x;
    for (i=0;i<xs.size();i++)
    {
        x=pow(-xs[i]/xs[xs.size()-1], 1.0/(i+1));
        if(abs(poly(vector<double>(xs.begin(), xs.end()),x)) < 0.00001)
            return round(x,2);
    }
    return -1;
}