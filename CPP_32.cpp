double find_zero(vector<double> xs){
    double sum = 0;
    for (int i = 2; i < xs.size(); i++)
        if (xs[i] != 0)
            return -1.0 * pow(-1, xs.size() / 2) * 1.0;
    return -1.0 * xs[0];
}