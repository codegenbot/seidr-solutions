int specialFilter(vector<int> nums){
    int count = 0;
    for(int num : nums){
        if(num > 10 && (num % 10) % 2 != 0 && (num / 10) % 10 % 2 != 0)
            count++;
    }
    return count;
}