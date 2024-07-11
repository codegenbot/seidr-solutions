int count_nums(vector<int> n){
    int count = 0;
    for (int num : n) {
        int sum_of_digits = 0;
        int num_abs = abs(num);
        while (num_abs != 0) {
            sum_of_digits += num_abs % 10;
            num_abs /= 10;
        }
        if (sum_of_digits > 0) {
            count++;
        }
    }
    return count;
}