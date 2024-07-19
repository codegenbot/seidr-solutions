int specialFilter(vector<int> nums){
    int count = 0;
    for(int num : nums){
        if(num > 10){
            string str = to_string(num);
            if((str[0] - '0') % 2 != 0 && (str.back() - '0') % 2 != 0){
                count++;
            }
        }
    }
    return count;
}