Here is the completed code:

int sum_squares(vector<float> lst){
    int total = 0;
    for(float i : lst){
        total += ceil(i)*ceil(i);
    }
    return total;
}