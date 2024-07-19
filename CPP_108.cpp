int count_nums(vector<int> n){
    int count = 0;
    for (int num : n) {
        int sumDigits = 0;
        int numAbs = abs(num);
        while (numAbs > 0) {
            sumDigits += numAbs % 10;
            numAbs /= 10;
        }
        if (sumDigits > 0) {
            count++;
        }
    }
    return count;
}