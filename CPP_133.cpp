int sum_squares(vector<float> lst){
    int total = 0;
    for(float x : lst) {
        int ceil_x = ceil(x);
        total += (int)sqrt(ceil_x)*ceil_x;
    }
    return total;
}