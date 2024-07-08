int sum_squares(vector<float> lst){
    int total = 0;
    for(float n : lst){
        int ceil_n = ceil(n);
        total += pow(ceil_n, 2);
    }
    return total;
}