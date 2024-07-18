int count_nums(vector<int> n){
    int count = 0;
    for (int num : n) {
        int sumDigits = 0;
        int numCopy = num;
        while (numCopy != 0) {
            sumDigits += abs(numCopy % 10);
            numCopy /= 10;
        }
        if (sumDigits > 0) {
            count++;
        }
    }
    return count;
}