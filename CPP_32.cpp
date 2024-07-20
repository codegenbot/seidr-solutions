double find_zero(vector<double> xs){
    double sum = 0;
    int i;
    for (i=0;i<xs.size();i++)
    {
        if(i%2==1) // odd coefficient, make it zero
            xs[i] = 0;
    }
    return -poly(xs, 1); // find the root by setting derivative to zero
}