int sum_squares(vector<float> lst){
    int result = 0;
    for(float x : lst){
        double rounded = ceil(x);
        result += (rounded*rounded);
    }
    return result;
}