int specialFilter(vector<int> nums){
    int count = 0;
    for(int num : nums){
        if(num > 10){
            string numStr = to_string(num);
            int firstDigit = numStr[0] - '0';
            int lastDigit = numStr[numStr.size() - 1] - '0';
            if(firstDigit % 2 != 0 && lastDigit % 2 != 0){
                count++;
            }
        }
    }
    return count;
}