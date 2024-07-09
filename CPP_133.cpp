int sum_squares(vector<float> lst){
    int sum = 0;
    for(float x : lst){
        int rounded = ceil(x);
        sum += pow(rounded, 2);
    }
    return sum;
}