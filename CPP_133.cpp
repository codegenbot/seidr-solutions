Here is the completed code:

int sum_squares(vector<float> lst){
    int total = 0;
    for(float x : lst) {
        int rounded = ceil(x);
        total += pow(rounded, 2);
    }
    return total;
}