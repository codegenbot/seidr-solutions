double find_zero(vector<double> xs){
    double sum = 0;
    int i;
    for (i=0;i<xs.size();i++)
    {
        if(i%2==1)sum+=-xs[i];
        else sum+=xs[i];
    }
    return -sum/poly(xs, sum);
}