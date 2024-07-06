double find_zero(vector<double> xs){
    double sum=0;
    int i;
    for (i=0;i<xs.size();i++)
    {
        if(i%2==1) sum+=-xs[i]*pow(xs[0],(i+1)/2.0);
        else sum+=xs[i]*pow(xs[0],i/2.0);
    }
    return -sum/xs[0];
}