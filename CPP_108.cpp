int count_nums(vector<int> n){
    int count = 0;
    for(int num : n){
        bool has_sum_greater_than_zero = false;
        if(num < 0) num = -num; // remove negative sign
        while(num > 0){
            int digit = num % 10;
            if(digit > 0) has_sum_greater_than_zero = true;
            num /= 10;
        }
        if(has_sum_greater_than_zero) count++;
    }
    return count;
}