Here is the completed code:

int sum_squares(vector<float> lst){
    int total = 0;
    for (float num : lst) {
        int rounded = ceil(num);
        total += pow(rounded, 2);
    }
    return total;
}