Here is the solution:

int sum_squares(vector<float> lst){
    int sum = 0;
    for (float num : lst) {
        int ceilNum = ceil(num);
        sum += pow(ceilNum, 2);
    }
    return sum;
}