int count_nums(vector<int> n){
    int count = 0;
    for (int num : n) {
        int sum = 0;
        int num_copy = num;
        if (num < 0) num_copy *= -1;
        while (num_copy != 0) {
            sum += num_copy % 10;
            num_copy /= 10;
        }
        if (sum > 0) {
            count++;
        }
    }
    return count;
}