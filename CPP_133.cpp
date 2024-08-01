Here is the completed code:

int sum_squares(vector<float> lst){
    int total = 0;
    for(float x : lst) {
        int rounded_x = ceil(x);
        total += pow(rounded_x, 2);
    }
    return total;
}