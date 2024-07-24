int sum_squares(vector<float> lst){
    int total = 0;
    for(float x : lst) {
        long y = ceil(x);
        total += pow(y,2);
    }
    return total;
}