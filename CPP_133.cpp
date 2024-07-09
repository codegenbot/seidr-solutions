int sum_squares(vector<float> lst){
    int total = 0;
    for(float x : lst){
        total += (int)ceil(x)*((int)ceil(x));
    }
    return total;
}