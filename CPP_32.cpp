double find_zero(vector<double> xs){
    double sum = 0;
    int i;
    for (i=0;i<xs.size();i++)
    {
        if(i%2==1) // only consider odd powers of x
            continue;
        sum+=xs[i]/(double)i; // divide by the power to find the root
    }
    return -sum; // since we are finding the root where poly(x)=0, it's the negative of what we calculated
}