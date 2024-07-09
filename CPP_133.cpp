Here is the completed code:

int sum_squares(vector<float> lst){
    int result = 0;
    for (float x : lst) {
        int y = ceil(x);
        result += pow(y, 2);
    }
    return result;
}