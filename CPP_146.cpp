int specialFilter(vector<int> nums){
    int count = 0;
    for(int i = 0; i < nums.size(); i++){
        string numStr = to_string(nums[i]);
        int firstDigit = numStr[0] - '0';
        int lastDigit = numStr[numStr.size() - 1] - '0';
        if(nums[i] > 10 && firstDigit % 2 != 0 && lastDigit % 2 != 0){
            count++;
        }
    }
    return count;
}