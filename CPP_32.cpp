double find_zero(vector<double> xs){
    double sum=0,x=1;
    int i;
    for (i=0;i<xs.size();i++)
    {
        if(i%2==0)
            sum+=xs[i]*x;
        else
            x=x*x;
    }
    return -sum/xs[0];
}