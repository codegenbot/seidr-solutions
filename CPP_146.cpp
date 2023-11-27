int specialFilter(vector<int> nums){
    int count = 0;
    for(int num : nums){
        string s = to_string(num);
        int firstDigit = s[0] - '0';
        int lastDigit = s[s.size() - 1] - '0';
        if(num > 10 && firstDigit % 2 != 0 && lastDigit % 2 != 0){
            count++;
        }
    }
    return count;
}