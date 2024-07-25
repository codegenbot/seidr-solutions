int count_nums(vector<int> n){
    int count = 0;
    for(int num : n){
        if(num < 0) num = -num; // make all numbers positive
        bool has_positive_sum_of_digits = false;
        while(num > 0){
            int digit = num % 10;
            if(digit != 0 || num / 10 == 0)
                has_positive_sum_of_digits = true;
            num /= 10;
        }
        if(has_positive_sum_of_digits) count++;
    }
    return count;
}