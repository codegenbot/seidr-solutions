double find_zero(vector<double> xs){
    double sum = 0;
    int i;
    for (i=0;i<xs.size();i++)
    {
        if(i%2==1) // odd power of x, so add to sum
            sum+=xs[i];
        else // even power of x, subtract from sum
            sum-=xs[i];
    }
    return -sum/xs[0]; // find the root by solving poly(x) = 0
}