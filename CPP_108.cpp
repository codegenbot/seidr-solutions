int count_nums(vector<int> n){
    int count = 0;
    for(int num : n){
        bool has_positive_sum = false;
        int sum = 0;
        if(num < 0) {
            while(abs(num) > 0) {
                int digit = abs(num) % 10;
                if(digit != 0) {
                    sum += (digit >= 5 ? -digit : digit);
                }
                num /= 10;
                if(sum > 0) has_positive_sum = true;
            }
        } else {
            while(num > 0) {
                int digit = num % 10;
                if(digit != 0) {
                    sum += (digit >= 5 ? -digit : digit);
                }
                num /= 10;
                if(sum > 0) has_positive_sum = true;
            }
        }
        if(has_positive_sum) count++;
    }
    return count;
}