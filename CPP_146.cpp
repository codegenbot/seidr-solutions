int specialFilter(vector<int> nums){
    int count = 0;
    for (int num : nums) {
        if (num > 10) {
            string str = to_string(abs(num));
            int numLength = str.length();
            if (str[0] % 2 != 0 && str[numLength - 1] % 2 != 0) {
                count++;
            }
        }
    }
    return count;
}