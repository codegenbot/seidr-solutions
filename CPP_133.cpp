Here is the solution:

int sum_squares(vector<float> lst) {
    int total = 0;
    for (float num : lst) {
        double roundedNum = ceil(num);
        total += pow(roundedNum, 2);
    }
    return total;
}