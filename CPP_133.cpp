int sum_squares(vector<float> lst){
    int result = 0;
    for(float x : lst) {
        int upperCeil = ceil(x);
        result += pow(upperCeil, 2);
    }
    return result;
}