int sum_squares(vector<float> lst){
    int sum = 0;
    for (float num : lst) {
        sum += pow(ceil(num), 2);
    }
    return sum;
}