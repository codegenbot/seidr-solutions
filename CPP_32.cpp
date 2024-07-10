double find_zero(vector<double> xs){
    double sum = 0;
    int i;
    for (i=0;i<xs.size();i++)
    {
        if(i%2==1) // odd coefficient, make it zero
            continue;
        sum+=xs[i]/(double)i;
    }
    return -sum;
}