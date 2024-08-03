int sum_squares(vector<float> lst){
    int result = 0;
    for (float x : lst) {
        result += ceil(x) * ceil(x);
    }
    return result;
}