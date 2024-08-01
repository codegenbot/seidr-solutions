int sum_squares(vector<float> lst){
    int total = 0;
    for(float i : lst){
        int rounded = ceil(i);
        total += pow(rounded,2);
    }
    return total;
}