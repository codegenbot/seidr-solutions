int count_nums(vector<int> n){
    int count = 0;
    for(int i : n){
        if(i < 0) {
            long num = labs(i);
            while(num > 0) {
                int digit = num % 10;
                if(digit != 0 || num / 10 == 0) {
                    count++;
                    break;
                }
                num /= 10;
            }
        } else if(i > 0){
            long num = i;
            while(num > 0) {
                int digit = num % 10;
                if(digit != 0) {
                    count++;
                    break;
                }
                num /= 10;
            }
        }
    }
    return count;
}