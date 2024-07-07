Here is the completed code:

int sum_squares(vector<float> lst){
    int result = 0;
    for (float num : lst) {
        int ceilNum = ceil(num);
        result += pow(ceilNum, 2);
    }
    return result;
}