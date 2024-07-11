int sum_squares(vector<float> lst){
    int result = 0;
    for(float x : lst) {
        int ceil_x = ceil(x);
        result += pow(ceil_x, 2);
    }
    return result;
}