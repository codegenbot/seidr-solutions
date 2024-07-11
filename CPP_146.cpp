int specialFilter(vector<int> nums){
    int count = 0;
    for(int num : nums){
        if(num > 10){
            string strNum = to_string(abs(num));
            if(strNum[0] % 2 != 0 && strNum[strNum.length() - 1] % 2 != 0){
                count++;
            }
        }
    }
    return count;
}