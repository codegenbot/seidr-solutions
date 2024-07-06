int count_nums(vector<int> n){
    int count = 0;
    for(int num : n){
        bool sum_positive = false;
        int temp = abs(num);
        while(temp > 0){
            if(temp % 10 != 0){
                sum_positive = true;
                break;
            }
            temp /= 10;
        }
        if(sum_positive) count++;
    }
    return count;
}