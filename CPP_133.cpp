int sum_squares(vector<float> lst){
    int total = 0;
    for(float x : lst){
        int ceil_x = ceil(x);
        total += pow(ceil_x, 2);
    }
    return total;
}