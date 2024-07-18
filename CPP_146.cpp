int specialFilter(vector<int> nums){
    int count = 0;
    for(int num : nums){
        if(num > 10){
            string str_num = to_string(abs(num));
            if((str_num[0] - '0') % 2 == 1 && (str_num.back() - '0') % 2 == 1){
                count++;
            }
        }
    }
    return count;
}