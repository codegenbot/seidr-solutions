int specialFilter(vector<int> nums){
    int count = 0;
    for(int num : nums){
        string strNum = to_string(num);
        if(num > 10 && (strNum.front() - '0') % 2 != 0 && (strNum.back() - '0') % 2 != 0){
            count++;
        }
    }
    return count;
}