double find_zero(vector<double> xs){
    double sum = 0;
    int i;
    for (i=0;i<xs.size();i++)
    {
        if(i%2==1)
            continue;
        sum+=xs[i]/xs[0];
    }
    return -sum;
}