int count_nums(vector<int> n){
    int count = 0;
    for(int i : n){
        if(i > 0) {
            int sum = 0;
            int num = abs(i);
            while(num > 0) {
                sum += (num % 10);
                num /= 10;
            }
            if(sum > 0)
                count++;
        } else if(i < 0) {
            int sum = 1;
            int num = i;
            while(num < 0) {
                sum -= (abs(num) % 10);
                num /= 10;
            }
            if(sum > 0)
                count++;
        }
    }
    return count;
}