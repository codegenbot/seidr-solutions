int count_nums(vector<int> n){
    int count = 0;
    for(int num : n){
        int sum = 0;
        int num_abs = abs(num);
        while(num_abs > 0){
            sum += num_abs % 10;
            num_abs /= 10;
        }
        if(sum > 0){
            count++;
        }
    }
    return count;
}