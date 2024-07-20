int count_nums(vector<int> n){
    int count = 0;
    for (int num : n) {
        int sum = 0;
        int numAbs = abs(num);
        while (numAbs > 0) {
            sum += numAbs % 10;
            numAbs /= 10;
        }
        if (sum > 0) {
            count++;
        }
    }
    return count;
}