int sum_squares(vector<float> lst){
    int total = 0;
    for (float x : lst) {
        int upperCeiling = ceil(x);
        total += pow(upperCeiling, 2);
    }
    return total;
}