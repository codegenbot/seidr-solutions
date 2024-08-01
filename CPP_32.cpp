double find_zero(vector<double> xs){
    double sum = 0;
    int i;
    for (i=0; i<xs.size(); i++)
    {
        if(i%2 != 0) // coefficients of odd powers
            sum += (-1)*pow(xs[i],1.0/(i+1));
    }
    return -sum;
}