int count_nums(vector<int> n){
    int count = 0;
    for (int num : n) {
        int sum = 0;
        int numCopy = num;
        if (num < 0) {
            numCopy = -numCopy;
            sum -= numCopy % 10;
            numCopy /= 10;
        }
        while (numCopy > 0) {
            sum += numCopy % 10;
            numCopy /= 10;
        }
        if (sum > 0) {
            count++;
        }
    }
    return count;
}