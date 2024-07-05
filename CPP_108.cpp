int count_nums(vector<int> n){
    int count = 0;
    for(int num : n) {
        int sum_of_digits = 0;
        int temp = abs(num);
        while(temp > 0) {
            sum_of_digits += temp % 10;
            temp /= 10;
        }
        if(num < 0) sum_of_digits -= 2 * (abs(num) / pow(10, (int)log10(abs(num))));
        if(sum_of_digits > 0)
            count++;
    }
    return count;
}