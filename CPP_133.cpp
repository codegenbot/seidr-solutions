int sum_squares(vector<float> lst){
    int result = 0;
    for(float num : lst){
        result += ceil(num) * ceil(num);
    }
    return result;
}