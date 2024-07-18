double find_zero(vector<double> xs){
    double result;
    if (xs.size() == 2)
    {
        result = -xs[0] / xs[1];
    }
    else
    {
        result = xs[1] / xs[2];
    }
    return result;
}