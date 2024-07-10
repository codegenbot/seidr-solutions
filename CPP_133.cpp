int sum_squares(const vector<float>& lst){
    int total = 0;
    for(float x : lst){
        total += pow(ceil(x),2);
    }
    return total;
}