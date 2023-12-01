int specialFilter(vector<int> nums){
    int count = 0;
    for(int num : nums){
        string strNum = to_string(num);
        int firstDigit = strNum[0] - '0';
        int lastDigit = strNum[strNum.size() - 1] - '0';
        if(num > 10 && firstDigit % 2 != 0 && lastDigit % 2 != 0){
            count++;
        }
    }
    return count;
}