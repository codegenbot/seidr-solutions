int specialFilter(vector<int> nums){
    int count = 0;
    for (int num : nums) {
        if (num > 10) {
            string strNum = to_string(abs(num));
            if ((strNum[0] - '0') % 2 != 0 && (strNum[strNum.size() - 1] - '0') % 2 != 0) {
                count++;
            }
        }
    }
    return count;
}