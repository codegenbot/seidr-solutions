Here is the completed code:

int sum_squares(vector<float> lst){
    int total_sum = 0;
    for(float x : lst) {
        double ceil_value = ceil(x);
        total_sum += (ceil_value * ceil_value);
    }
    return total_sum;
}