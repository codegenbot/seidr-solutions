Here is the completed code:

int sum_squares(vector<float> lst){
    int sum = 0;
    for(float x : lst){
        int y = ceil(x);
        sum += pow(y,2);
    }
    return sum;
}