int count_nums(vector<int> n){
    int count = 0;
    for (int num : n) {
        int sumDigits = 0;
        int numCopy = num;
        if (num < 0) {
            numCopy *= -1;
            sumDigits -= numCopy % 10;
            numCopy /= 10;
        }
        while (numCopy) {
            sumDigits += numCopy % 10;
            numCopy /= 10;
        }
        if (sumDigits > 0) {
            count++;
        }
    }
    return count;
}